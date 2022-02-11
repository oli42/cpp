#include "iter.hpp"

int main()
{
    int ray[] = {1,2,3,4};
    iter(ray, 4, sayIt);

    std::string  strings[] = {"une", "deux", "trois", "quatre"};
    iter(strings, 4, sayIt);

    float fray[] = {1.23,2.34,3.45,4.56};
    iter(fray, 4, sayIt);

}