# include <iostream>
# include <chrono>
# include <thread>
# include "hello.hpp"

int main()
{
  char buff[512];
 
  std::cout << "hello!" << std::endl;
  std::cout << "What's your name?" << std::endl;
  std::cin >> buff;
  std::cout << "Hi " << buff << ". I hope you like c++ ;)" << std::endl;

  std::this_thread::sleep_for(std::chrono::milliseconds(2000));

  std::cout << "BTW, what's your age " << buff << " ?" << std::endl;
  std::cin >> first::your_age;
  if (first::your_age > first::my_age)
    std::cout << "oops, I think i am  younger than you... ;)" << std::endl;
  else if (first::your_age < first::my_age)
    std::cout << "woah, you are young!" << std::endl;
  else if (first::your_age == first::my_age)
    std::cout << "Incredible!" << std::endl;
  std::cout << first::diff() << " years separate us." << std::endl;
  first::bravo();

  return (0);
}
