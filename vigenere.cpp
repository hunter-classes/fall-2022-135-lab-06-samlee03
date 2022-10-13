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
  for (int i = 0; i < plaintext.length(); i++){
    static int j = 0;
    encryptedStr += shiftC(plaintext[i], keyword[j] - 97);
    if ((plaintext[i] >= 65 && plaintext[i] <= 90) || (plaintext[i] <= 122 && plaintext[i] >= 97)){
      j++;
    }
    if (j % keyword.length() == 0){
      j = 0;
    }
  }
  std::cout << encryptedStr << std::endl;
  return encryptedStr;
}
