#include <iostream>

char shiftC(char c, int rshift){
  char newChar = c;
  if (c >= 65 && c <= 90){
    int value = c - 65 + rshift;
    value = value % 26;
    newChar = value + 65;
  } else if (c >= 97 && c <= 122){
    int value = c - 97 + rshift;
    value = value % 26;
    newChar = value + 97;
  }
  return newChar;
}

std::string encryptVigenere(std::string plaintext, std::string keyword){
  std::string encryptedStr = "";
  int j = 0;
  for (int i = 0; i < plaintext.length(); i++){
    
    int rshift = keyword[j] - 97;
    //std::cout << "current letter " << plaintext[i] << " rshift: " << rshift << std::endl;
    encryptedStr += shiftC(plaintext[i], rshift);
    if ((plaintext[i] >= 65 && plaintext[i] <= 90) || (plaintext[i] <= 122 && plaintext[i] >= 97)){
      j++;
    }
    if (j % keyword.length() == 0){
      j = 0;
    }
  }
  // std::cout << encryptedStr << std::endl;
  return encryptedStr;
}
