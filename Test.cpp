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
    CHECK_THROWS(n.write(43,5,100,Direction::Horizontal, "HELLO"));
    CHECK_THROWS(n.read(10,15,120,Direction::Vertical,-5));
    CHECK_THROWS(n.read(-1,5,100,Direction::Horizontal,105));
    CHECK_THROWS(n.erase(40,5,100,Direction::Vertical, -3));
    CHECK_THROWS(n.erase(-1,5,100,Direction::Horizontal, 200));
    CHECK_THROWS(n.show(-5));
    CHECK_THROWS(n.show(-2312));
    CHECK_THROWS(n.show(-2312));
    CHECK_THROWS(n.show(-2312));
    CHECK_THROWS(n.show(-2312));
    CHECK_THROWS(n.show(-2312));
    CHECK_THROWS(n.show(-2312));
}

TEST_CASE("Good input"){
    ariel::Notebook n;
    n.write(6,5,65,Direction::Horizontal, "hi");
    CHECK(n.read(6,5,100,Direction::Horizontal, 2) == "hi");
    n.write(6,5,50,Direction::Horizontal, "hi");
    CHECK(n.read(6,4,50,Direction::Vertical, 2) == "_h");
    n.write(8,5,65,Direction::Horizontal, "hello");
    n.erase(8,5,65,Direction::Horizontal, 5);
    CHECK(n.read(8,5,65,Direction::Horizontal, 5) == "~~~~~");
    n.write(10,0,0,Direction::Vertical, "BOB");
    CHECK(n.read(10,0,0,Direction::Horizontal, 3) == "B__");
    CHECK(n.read(10,0,0,Direction::Vertical, 3) == "BOB");
}