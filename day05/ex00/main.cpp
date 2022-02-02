#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
        try
        {
                Bureaucrat one("Albert", 150);
                // one.decrement();
                // one.setNote(1);
                // one.increment();

        }
        catch (Bureaucrat::GradeTooHighException & one)
        {
                std::cout << "The note is too hight!" << std::endl; 
        }
        catch (Bureaucrat::GradeTooLowException & one)
        {
                std::cout << "The note is too low!" << std::endl; 
        }
        
//-----------------------------------------------------------

        // try
        // {
        //         Bureaucrat two("Albert", 1);
        //         std::cout << two << std::endl;
        // }
        // catch (Bureaucrat::GradeTooHighException & one)
        // {
        //         std::cout << "Too hight!" << std::endl; 
        // }
        // catch (Bureaucrat::GradeTooLowException & one)
        // {
        //         std::cout << "Too low!" << std::endl; 
        // }
}