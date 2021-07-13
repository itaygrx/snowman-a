#include "doctest.h"
#include <iostream>
#include <algorithm>
using namespace std;
#include "snowman.hpp"
using namespace ariel;

TEST_CASE("Valid inputs"){
    // Checking different Snow-mans//
    CHECK(snowman(42314321)=="0");
    CHECK(snowman(32342324)=="0");
    CHECK(snowman(22341321)=="0");
    CHECK(snowman(12343223)=="0");
    CHECK(snowman(12142321)=="0");
    CHECK(snowman(12334222)=="0");
    CHECK(snowman(11443221)=="0");
    CHECK(snowman(12241321)=="0");
}

TEST_CASE("Invalid inputs"){
    CHECK_THROWS(snowman(1234321)); // 7 digits invalid input need to use 8 digits
    CHECK_THROWS(snowman(123424321)); // 9 digits invalid input need to use 8 digits
    CHECK_THROWS(snowman(12343521));    // Invalid Input : digit is 5 not in range 
    CHECK_THROWS(snowman(12343021));    // Invalid input : digit is 0 not in range
    CHECK_THROWS(snowman(1234*321));    // use of binary operator inside the paramater moved to snowman() could work or could not but not valid;
    CHECK_NOTHROW(snowman(1234321+0));    // use of binary operator inside the paramater moved to snowman() could work or could should not throw.
    CHECK_THROWS(snowman(12343-21));    // use of binary operator inside the paramater moved to snowman() could work or could not but not valid;
    CHECK_THROWS(snowman(123432+1));    // use of binary operator inside the paramater moved to snowman() could work or could not but not valid;
    CHECK_THROWS(snowman(1234^321));    // use of binary operator inside the paramater moved to snowman() could work or could not but not valid;
    CHECK_THROWS(snowman(1234%321));    // use of binary operator inside the paramater moved to snowman() could work or could not but not valid;
    CHECK_THROWS(snowman(!1234321));    // use of binary operator inside the paramater moved to snowman() could work or could not but not valid;
    CHECK_THROWS(snowman(-12324321));    //  minus int is not valid.
    
}