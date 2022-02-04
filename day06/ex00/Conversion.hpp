#ifndef CONVERSION_HPP
# define CONVERSION_HPP
#include <string>
#include <exception>
#include <iostream>
#include<sstream> 
#include <iomanip>

#define CHAR 1
#define DOUBLE 2
#define FLOAT 3
#define INT 4
#define IMPOSSIBLE 5

class Conversion 
{
    private:
        std::string _arg;
        int _set;
        int _i;
        float _f;
        double _d;
        char _c;

    public:
        Conversion();
        Conversion(std::string arg);
        Conversion(Conversion const & one);
        ~Conversion();

        Conversion & operator=(Conversion const & one);
        void check_literale(const std::string arg);
        int identify_literale(const std::string arg);
        void convert_literale(const std::string arg, int i);
        void print_literale_c();
        void print_literale_d();
        void print_literale_f();
        void print_literale_i();



        std::string getArg() const;
        int getInt() const;
        float getFloat() const;
        char getChar() const;
        double getDouble() const;
        int getSet() const;

        // class WrongArg : public std::exception
        // {
        //     public:
        //         const char * what() const throw();
        // };
        
        class Impossible : public std::exception
        {
            public:
                const char * what() const throw();
        };
        
};

#endif