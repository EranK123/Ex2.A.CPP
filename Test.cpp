#include "doctest.h"
#include "Notebook.hpp"
#include "Direction.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

TEST_CASE("Bad input"){
    ariel::Notebook n;
    CHECK_THROWS(n.write(-1,5,100,Direction::Horizontal, "hi"));
    CHECK_THROWS(n.write(5,5,120,Direction::Vertical, "hi"));
    CHECK_THROWS(n.write(30,-20,30,Direction::Horizontal, "hi"));
    CHECK_THROWS(n.write(-1,5,100,Direction::Horizontal, "\n"));
    CHECK_THROWS(n.read(10,15,120,Direction::Vertical,-5));
    CHECK_THROWS(n.read(-1,5,100,Direction::Horizontal,105));
    CHECK_THROWS(n.erase(40,5,100,Direction::Vertical, -3));
    CHECK_THROWS(n.erase(-1,5,100,Direction::Horizontal, 200));
    CHECK_THROWS(n.show(-5));
    CHECK_THROWS(n.show(-2312));
}

TEST_CASE("Good input"){
    
}