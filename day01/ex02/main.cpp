#include <iostream>
#include <string>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *stringPtr = &str;
    std::string& stringRef = str;

// the address
    std::cout << &str << std::endl;
    std::cout << stringPtr << std::endl;
    std::cout << &stringRef << std::endl;

// the string
    std::cout << *stringPtr << std::endl;
    std::cout << stringRef << std::endl;
  


    return (0);
}