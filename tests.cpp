#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

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
}

