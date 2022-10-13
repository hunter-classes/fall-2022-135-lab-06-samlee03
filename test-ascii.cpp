#include <iostream>

int main()
{
  std::cout << std::endl << "Input: ";
  std::string line;
  getline(std::cin, line);
  std::cout << std::endl;

  for (int i = 0; i < line.length(); i++){
    std::cout << line[i] << " " << (int) line[i] << std::endl;
    
  }
  return 0;
}
