#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("Caesar Cipher Shift Test"){
  CHECK(shiftChar('b', 5) == 'g');
  CHECK(shiftChar('A', 20) == 'U');
  CHECK(shiftChar('W', 25) == 'V');
  CHECK(shiftChar('Z', 60) == 'H');
}

TEST_CASE("Caesar Cipher Function Test"){
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
  CHECK(encryptCaesar("This message works. Good!", 50) == "Rfgq kcqqyec umpiq. Emmb!");
  CHECK(encryptCaesar("Example Text with Small Shift", 3) == "Hadpsoh Whaw zlwk Vpdoo Vkliw");
  CHECK(encryptCaesar("Example Text with Big Shift", 100) == "Atwilha Patp sepd Xec Odebp");
}

TEST_CASE("Vigenere Cipher Function Test"){
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
  CHECK(encryptVigenere("Example Text with key \"keyword\"", "keyword") == "Obyidch Divp kzwr ocu \"yvbgspz\"");
  CHECK(encryptVigenere("Text with $ymb()l$", "keyword") == "Divp kzwr $ckx()z$");
}

TEST_CASE("Caesar Decryption Test"){
  CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
  CHECK(decryptCaesar("Nbcm myhnyhwy bum vyyh xywixyx.", 20) == "This sentence has been decoded.");
}

TEST_CASE("Vigenere Decryption Test"){
  CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}

