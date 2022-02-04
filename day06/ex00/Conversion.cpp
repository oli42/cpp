#include "Conversion.hpp"

    Conversion::Conversion()
    {

    }

    Conversion::Conversion(std::string arg) :_arg (arg), _set (0)
    {
        check_literale(arg);
    }

    Conversion::Conversion(Conversion const & one)
    {
        this->operator=(one);
    }

    Conversion::~Conversion()
    {

    }

    Conversion & Conversion::operator=(const Conversion & one)
    {
        this->_arg = one.getArg();
        return (*this);
    }


//------------------------------------------------------------------------------

    void Conversion::check_literale(const std::string arg)
    {
        std::stringstream strs;
        strs << arg;
        strs >> this->_i;
        if ((this->_i >= 0 && this->_i <= 31) || this->_i == 127)
            this->_set = 1;
        if (this->_i > 127)
            this->_set = 2;



        
    }

    int Conversion::identify_literale(const std::string arg)
    {
        int c = 0;
        int  d = 0; 
        int f = 0;
        if (arg.length() == 1 && (!isdigit(static_cast<int>(arg[0]))))
            return (CHAR);
        for (size_t i = 0; i < arg.length(); i++)
        {
            if (arg[i] == '.')
                d += 1;
            else if (arg[i] == 'f')
                f += 1;
            else if (!isdigit(arg[i]))
                c += 1;
        }
        if (d == 1 && f == 0 && c == 0)
            return (DOUBLE);
        else if ((d == 1 || d == 0) && f == 1 && c == 0)
            return (FLOAT);
        else if (d == 0 && f == 0 && c == 0)
        { 
            check_literale(arg);
            return (INT);
        }
        return (IMPOSSIBLE);
    }


    void Conversion::convert_literale(const std::string arg, int i)
    {
        std::stringstream strs;
        strs << arg;
        if ( i == 1)
        {
            strs >> this->_c;
            print_literale_c();
        }
        else if ( i == 2)
        {
            strs >> this->_d;
            print_literale_d();
        }
        else if ( i == 3)
        {
            strs >> this->_f;
            print_literale_f();
        }
         else if ( i == 4)
        {
            strs >> this->_i;
            print_literale_i();
        }
        else if (i == 5)
            throw Impossible();
    }

    void Conversion::print_literale_c()
    {
        this->_d = static_cast<double>(this->_c);
        this->_f = static_cast<float>(this->_c);
        this->_i = static_cast<int>(this->_c);
        std::cout.precision(1);
        if (this->getSet() == 1)
            std::cout << "char: Non displayable" << std::endl;
        else if (this->getSet() == 2)
            std::cout << "char: Impossible" << std::endl;
        else
            std::cout << "char: '" << this->_c << "'" << std::endl;
        std::cout << "int: " << this->_i  << std::endl;
        std::cout << "float: " << this->_f  << ".0f" << std::endl;
        std::cout << "double: " << this->_d  << ".0" << std::endl;
    }

    void Conversion::print_literale_d()
    {
        this->_c = static_cast<double>(this->_d);
        this->_f = static_cast<float>(this->_d);
        this->_i = static_cast<int>(this->_d);
        std::cout.precision(1);
        if (this->getSet() == 1)
            std::cout << "char: Non displayable" << std::endl;
         else if (this->getSet() == 2)
            std::cout << "char: Impossible" << std::endl;
        else
            std::cout << "char: '" << std::fixed << this->_c << "'" << std::endl;
        std::cout << "int: " << std::fixed << this->_i  << std::endl;
        std::cout << "float: " << std::fixed << this->_f  << "f" << std::endl;
        std::cout << "double: " << std::fixed << this->_d  << std::endl;
    }

    void Conversion::print_literale_f()
    {
        this->_c = static_cast<double>(this->_f);
        this->_d = static_cast<float>(this->_f);
        this->_i = static_cast<int>(this->_f);
        std::cout.precision(2);
        if (this->getSet() == 1)
            std::cout << "char: Non displayable" << std::endl;
        else if (this->getSet() == 2)
            std::cout << "char: Impossible" << std::endl;
        else
            std::cout << "char: '" << std::fixed << this->_c << "'" << std::endl;
        std::cout << "int: " << std::fixed  << this->_i  << std::endl;
        std::cout << "float: " << std::fixed << this->_f  << "f" << std::endl;
        std::cout << "double: " << std::fixed << this->_d  << std::endl;
    }

    void Conversion::print_literale_i()
    {
        this->_c = static_cast<double>(this->_i);
        this->_d = static_cast<float>(this->_i);
        this->_f = static_cast<int>(this->_i);
        std::cout.precision(0);
        if (this->getSet() == 1)
            std::cout << "char: Non displayable" << std::endl;
        else if (this->getSet() == 2)
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: '" << std::fixed << this->_c << "'" << std::endl;
        std::cout << "int: " << std::fixed  << this->_i  << std::endl;
        std::cout << "float: " << std::fixed << this->_f  << ".0f" << std::endl;
        std::cout << "double: " << std::fixed << this->_d  << ".0" << std::endl;
    }

    //--------------------------------------------------------------------------
    
    std::string Conversion::getArg() const
    {
        return (this->_arg);
    }
    int Conversion::getInt() const
    {
        return (this->_i);
    }
    float Conversion::getFloat() const
    {
        return (this->_f);
    }
    char Conversion::getChar() const
    {
        return (this->_c);
    }
    double Conversion::getDouble() const
    {
        return (this->_d);
    }

    int Conversion::getSet() const
    {
        return (this->_set);
    }

//------------------------------------------------------------------------------

    // const char * Conversion::WrongArg::what() const throw()
    // {
    //     return ("Wrong argument!");
    // }

    const char * Conversion::Impossible::what() const throw()
    {
        return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
    }