/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:30:16 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/06 12:32:30 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP
#include <string>
#include <exception>
#include <iostream>
#include<sstream> 
#include <iomanip>
#include <climits>

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
        long _test;

    public:
        Conversion();
        Conversion(std::string arg);
        Conversion(Conversion const & one);
        ~Conversion();

        Conversion & operator=(Conversion const & one);
        void check_literale(const std::string arg);
        int identify_literale(const std::string arg);
        void convert_literale(const std::string arg);
        void print_literale_c();
        void print_literale_d();
        void print_literale_f();
        void print_literale_i();



        std::string getArg() const;
        int getInt() const;
        float getFloat() const;
        char getChar() const;
        double getDouble() const;
        long getSet() const;
        
        class Impossible : public std::exception
        {
            public:
                const char * what() const throw();
        };

        class NanCases : public std::exception
        {
            public:
                const char * what() const throw();
        };

        class InfPlusCases : public std::exception
        {
            public:
                const char * what() const throw();
        };

        class InfMinusCases : public std::exception
        {
            public:
                const char * what() const throw();
        };
};

#endif