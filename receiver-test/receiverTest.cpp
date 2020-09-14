#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "functions.h"

using namespace functions;

TEST_CASE("remove number from given string") {
    string str="12testing282 number93 removal1",str2="testing 282another number93 removal2";
    functions::removeNums(str);functions::removeNums(str2);
    REQUIRE( str  == "testing number removal");
    REQUIRE( str2 == "testing another number removal");
}

TEST_CASE("remove special characters from given string") {
    string str="test[ing s^peci]al charac(ter removal 1",str2="te%sting spec#ial chara!cter re[moval 2";
    functions::removeSpecialChar(str);functions::removeSpecialChar(str2);
    REQUIRE( str  == "testing special character removal 1");
    REQUIRE( str2 == "testing special character removal 2");
}

TEST_CASE("converting from upper case to lower") {
    string str="CoNvErTiNg To LoWeR CaSE",str2="ChEcK aNoTHeR StrING";
    functions::ToLowerChar(str);functions::ToLowerChar(str2);
    REQUIRE( str  == "converting to lower case");
    REQUIRE( str2 == "check another string");
}
