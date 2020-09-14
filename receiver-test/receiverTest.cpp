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
