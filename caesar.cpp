#include <iostream>

char shiftChar(char c, int rshift){
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

std::string encryptCaesar(std::string plaintext, int rshift){
  std::string newString = "";
  for (int i = 0; i < plaintext.length(); i++){
    newString += shiftChar(plaintext[i], rshift);
  }
  return newString;
}
