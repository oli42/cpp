#ifndef HELLO_HPP
# define HELLO_HPP
# include <stdlib.h>
# include <iostream>

namespace first {
  
    int my_age = 20;
    int your_age;

    int diff(void) { return abs(my_age - your_age);}

    void bravo(void){
        std::cout << "Bravo youpi!" << std::endl;
    }

};

#endif