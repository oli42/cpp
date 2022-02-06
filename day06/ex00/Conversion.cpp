/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:30:07 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/06 12:01:20 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        strs >> this->_test;
        if ((this->_test >= 0 && this->_test <= 31) || this->_test == 127)
            this->_set = 1;
        if (this->_test > 127 || this->_test < 0)
            this->_set = 2;
        if (this->_test > INT_MAX || this->_test < INT_MIN)
            this->_set = 3;
    }

    int Conversion::identify_literale(const std::string arg)
    {
        int c = 0;
        int  d = 0; 
        int f = 0;
        if (arg.length() == 1 && (!isdigit(static_cast<int>(arg[0]))))
            return (CHAR);
        if ((arg.compare("nan") == 0) || (arg.compare("nanf") == 0))
            throw NanCases();
        for (size_t i = 0; i < arg.length(); i++)
        {
            if (arg[i] == '.')
                d += 1;
            else if (arg[i] == 'f')
                f += 1;
            else if (!isdigit(arg[i]) && arg[i] != '-' && arg[i] != '+')
                c += 1;
        }
        if (d == 1 && f == 0 && c == 0)
            return (DOUBLE);
        else if ((d == 1 || d == 0) && f == 1 && c == 0)
            return (FLOAT);
        else if (d == 0 && f == 0 && c == 0)
            return (INT);
        return (IMPOSSIBLE);
    }


    void Conversion::convert_literale(const std::string arg)
    {
        std::stringstream strs;
        strs << arg;
        check_literale(arg);
        int i = identify_literale(arg);
        
        if (i == 1)
        {
            strs >> this->_c;
            print_literale_c();
        }
        else if (i == 2)
        {
            strs >> this->_d;
            print_literale_d();
        }
        else if (i == 3)
        {
            strs >> this->_f;
            print_literale_f();
        }
         else if (i == 4)
        {
            strs >> this->_i;
            print_literale_i();
        }
        else if (i == 5)
            throw Impossible();
    }

    void Conversion::print_literale_c()
    {
        try
        {
            this->_d = static_cast<double>(this->_c);
            this->_f = static_cast<float>(this->_c);
            this->_i = static_cast<int>(this->_c);
            std::cout.precision(1);
            if (this->getSet() == 1 )
                std::cout << "char: Non displayable" << std::endl;
            else if (this->getSet() == 2 || this->getSet() == 3)
                std::cout << "char: impossible" << std::endl;
            else
                std::cout << "char: '" << this->_c << "'" << std::endl;
            std::cout << "int: " << this->_i  << std::endl;
            std::cout << "float: " << this->_f  << ".0f" << std::endl;
            std::cout << "double: " << this->_d  << ".0" << std::endl;
        }
        catch (const std::exception & e)
        {
        }
    }

    void Conversion::print_literale_d()
    {
        try
        {
            this->_c = static_cast<int>(this->_d);
            this->_f = static_cast<float>(this->_d);
            this->_i = static_cast<int>(this->_d);
            std::cout.precision(1);
            if (this->getSet() == 1 )
                std::cout << "char: Non displayable" << std::endl;
            else if (this->getSet() == 2 || this->getSet() == 3)
                std::cout << "char: impossible" << std::endl;
            else
                std::cout << "char: '" << std::fixed << this->_c << "'" << std::endl;
            if (this->getSet() == 3)
                std::cout << "int: impossible" << std::endl;
            else
                std::cout << "int: " << std::fixed << this->_i  << std::endl;
            std::cout << "float: " << std::fixed << this->_f  << "f" << std::endl;
            std::cout << "double: " << std::fixed << this->_d  << std::endl;
        }
        catch (const std::exception & e)
        {
        }
    }

    void Conversion::print_literale_f()
    {
        try
        {
            this->_c = static_cast<int>(this->_f);
            this->_d = static_cast<double>(this->_f);
            this->_i = static_cast<int>(this->_f);
            std::cout.precision(1);
            if (this->getSet() == 1 )
                std::cout << "char: Non displayable" << std::endl;
            else if (this->getSet() == 2 || this->getSet() == 3)
                std::cout << "char: impossible" << std::endl;
            else
                std::cout << "char: '" << std::fixed << this->_c << "'" << std::endl;
            if (this->getSet() == 3)
                std::cout << "int: impossible" << std::endl;
            else
                std::cout << "int: " << std::fixed  << this->_i  << std::endl;
            std::cout << "float: " << std::fixed << this->_f  << "f" << std::endl;
            std::cout << "double: " << std::fixed << this->_d  << std::endl;
        }
        catch (const std::exception & e)
        {
        }
    }

    void Conversion::print_literale_i()
    {
        try
        {
            if (this->getSet() == 3)
                this->_d = static_cast<double>(this->_test);
            else
                this->_d = static_cast<double>(this->_i);
            if (this->getSet() == 3)
                this->_f = static_cast<float>(this->_test);
            else
                this->_f = static_cast<float>(this->_i);
            this->_c = static_cast<int>(this->_i);
            std::cout.precision(0);
            if (this->getSet() == 1 )
                std::cout << "char: Non displayable" << std::endl;
            else if (this->getSet() == 2 || this->getSet() == 3)
                std::cout << "char: impossible" << std::endl;
            else
                std::cout << "char: '" << std::fixed << this->_c << "'" << std::endl;
            if (this->getSet() == 3)
                std::cout << "int: impossible" << std::endl;
            else
                std::cout << "int: " << std::fixed  << this->_i  << std::endl;
            std::cout << "float: " << std::fixed << this->_f  << ".0f" << std::endl;
            std::cout << "double: " << std::fixed << this->_d  << ".0" << std::endl;
        }
        catch (const std::exception & e)
        {
        }
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

    long Conversion::getSet() const
    {
        return (this->_set);
    }

//------------------------------------------------------------------------------

    const char * Conversion::Impossible::what() const throw()
    {
        return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
    }

    const char * Conversion::NanCases::what() const throw()
    {
        return ("char: impossible\nint: impossible\nfloat: nanf\ndouble: nan");
    }