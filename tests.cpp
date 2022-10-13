#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

// add your tests here
TEST_CASE("Caesar Cipher Shift Test"){
  CHECK(shiftChar('b', 5) == 'g');
  CHECK(shiftChar('A', 20) == 'U');
  CHECK(shiftChar('G', 5) == 'L');
}

TEST_CASE("Caesar Cipher Function Test"){
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}

