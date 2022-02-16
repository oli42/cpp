#include "Span.hpp"

int main()
{
    try{
    Span sp = Span(5);
    sp.addNumber(-100);
    sp.addNumber(455);
    sp.addNumber(63);
    sp.addNumber(-122);
    // sp.addNumber(11);
    sp.addNumber(32);
    sp.shortestSpan();
    std::cout << "shortest diff: " << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

return (0);

}
