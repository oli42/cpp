#include "Array.hpp"

int main()
{
    try
    {
    int *a = new int(5);
    std::cout << *a << std::endl;

    Array<int> b(5);
    std::cout << b.size() << std::endl;

    a[4] = 1000;
    b[4] = 1000;
    std::cout << "array a: " << a[4] << " et array b: " << b[4] << std::endl;

    Array<int> c(5);
    c = b;
    std::cout << "array c at index 4 after copy: " << c[4] << " the same as array b at index 4: " << b[4] << std::endl;

    b[4] = 8000;
    std::cout << "array c at index 4 didn't change: " << c[4] << " but array b did: " << b[4] << std::endl;

    c[4] = 1;

    std::cout << "array c at index 4 changed: " << c[4] << " but array b did not: " << b[4] << std::endl;

    std::cout << "array b at index 8: " << b[8] << std::endl;


    Array<std::string> test1(3);
    Array<std::string> test2(3);

    test1[1] = "hello";
    test2[1] = "Bye";
    std::cout << test1[1] << " - " << test2[1] << std::endl; 

    test2[2] = "Titi";
    test1[2] = test2[2];
    std::cout << test1[2] << " - " << test2[2] << std::endl; 

    test2[2] = "Toto";
    std::cout << test1[2] << " - " << test2[2] << std::endl; 

    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}