# include <iostream>

int main()
{
  char buff[512];
  std::cout << "hello!" << std::endl;
  std::cout << "What's your name?" << std::endl;
  std::cin >> buff;
  std::cout << "Hi " << buff << ". I hope you like c++ ;)" << std::endl;
  return (0);
}
