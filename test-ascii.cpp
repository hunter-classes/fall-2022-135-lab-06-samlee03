#include <iostream>

int main()
{
  std::string line;
  getline(std::cin, line);

  for (int i = 0; i < line.length(); i++){
    std::cout << line[i] << " " << (int) line[i] << std::endl;
    
  }
  return 0;
}
