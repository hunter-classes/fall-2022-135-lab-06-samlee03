#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include <iomanip>
#include "funcs.h"

int main()
{
  std::string plaintext = "Hello World!";
  std::cout << "= Caesar =" << std::endl;
  std::string string = encryptCaesar(plaintext, 3);
  std::cout << "Enter Shift" << ": 3" << std::endl << "Ciphertext" << ": " << string << std::endl << "Decrypted" << ": " << decryptCaesar(string, 3) << std::endl;
  std::cout << std::endl << "= Vigenere =" << std::endl << "Enter keyword"  << ": cake" << std::endl << "Ciphertext" << ": " << encryptVigenere(plaintext, "cake") << std::endl << "Decrypted" <<  ": " << decryptVigenere(encryptVigenere(plaintext, "cake"), "cake") << std::endl;
  return 0;
}
