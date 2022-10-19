#define mampiasa include

#include <iostream>
#include <string>
#include <string>
#include "base.hpp"
#include "laharan_teny.hpp"
#include <cstring>
#include "catch_amalgamated.hpp"

TEST_CASE("Test constuctor", "[Conatructor]")
{
    Gasy::laharan_teny str;
    REQUIRE(str.ny_halavany() == 0);
    REQUIRE(str.cstr() == nullptr);
    
    Gasy::laharan_teny str2("Python");

    REQUIRE(strcmp(str2.cstr(), "Python") == 0);
    REQUIRE(str2.ny_halavany() == strlen("Python"));

    Gasy::laharan_teny str3(str2);
    REQUIRE(strcmp(str3.cstr(),str2.cstr()) == 0);
    REQUIRE(str3.ny_halavany() == str2.ny_halavany());
}

TEST_CASE("Assignment operator", "[operator=]")
{
    Gasy::laharan_teny str;
    str = "C++";

    REQUIRE(strcmp(str.cstr(), "C++") == 0);
    REQUIRE(str.ny_halavany() == strlen("C++"));

    Gasy::laharan_teny str2("");
    str2 = str;
    REQUIRE(strcmp(str.cstr(), str2.cstr()) == 0);
    REQUIRE(str.ny_halavany() == str2.ny_halavany());
}

TEST_CASE("Comparison operator", "[operator==]")
{
    Gasy::laharan_teny str("C++");
    Gasy::laharan_teny str2("C++");

    REQUIRE(str == str2);
    REQUIRE(str == "C++");
}

TEST_CASE("Comparison operator", "[operator!=]")
{
    Gasy::laharan_teny str("C++");
    Gasy::laharan_teny str2("C++20");

    REQUIRE(str != str2);
    REQUIRE(str != "Python");
}


TEST_CASE("Addition operatror", "[oparator+]")
{
    Gasy::laharan_teny str("C++");
    Gasy::laharan_teny str2(" is great!");

    Gasy::laharan_teny str3 = str + str2;

    REQUIRE(str3 == "C++ is great!");
    REQUIRE(str3.ny_halavany() == strlen("C++ is great!"));

    Gasy::laharan_teny str4 = str + " is easy!";

    REQUIRE(str4 == "C++ is easy!");
    REQUIRE(str4.ny_halavany() == strlen("C++ is easy!"));
}
