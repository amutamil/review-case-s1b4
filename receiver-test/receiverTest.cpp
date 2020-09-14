#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "functions.h"

using namespace functions;

TEST_CASE("remove number from given string") {
    string str="12testing282number93removal1",str2="testing282anothernumber93removal2";
    functions::removeNums(str);functions::removeNums(str2);
    REQUIRE( str  == "testingnumberremoval");
    REQUIRE( str2 == "testinganothernumberremoval");
    
}
