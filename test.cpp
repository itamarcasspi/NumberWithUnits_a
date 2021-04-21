#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <stdexcept>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>


using namespace ariel;

using namespace std;


NumberWithUnits min(15,"min")
NumberWithUnits hour(2,"hour");
NumberWithUnits cm(25,"cm");
NumberWithUnits m(10,"m");
NumberWithUnits km(50,"km");
NumberWithUnits kg(30,"kg");
NumberWithUnits ton(15,"ton");



TEST_CASE("+,-")
{
    hour = hour+min;
    CHECK(hour == NumberWithUnits(2.25,"hour"));

    hour = hour-min;
    CHECK(hour == NumberWithUnits(2,"hour"));

    m = m+cm;
    CHECK(m == NumberWithUnits(10.25,"m"));

    m = m-cm;
    CHECK(m == NumberWithUnits(10,"m"));

    km = km + m;
    CHECK(km == NumberWithUnits(50.10,"km"));

    km = km - m;
    CHECK(km == NumberWithUnits(50,"m"));
}

TEST_CASE("+=, -=")
{
    hour +=min;
    CHECK(hour == NumberWithUnits(2.25,"hour"));

    hour -= min;
    CHECK(hour == NumberWithUnits(2,"hour"));

    m +=cm;
    CHECK(m == NumberWithUnits(10.25,"m"));

    m -=cm;
    CHECK(m == NumberWithUnits(10,"m"));

    km += m;
    CHECK(km == NumberWithUnits(50.10,"km"));

    km -= m;
    CHECK(km == NumberWithUnits(50,"m"));

}

TEST_CASE(">, >=, <, <=, ==, !=")
{
    CHECK(km<m == false);

    CHECK((km==km) == true);

    CHECK(km>m == true);

    CHECK(km!=m == false);


}

TEST_CASE("++,--")
{
   
   CHECK(km == NumberWithUnits(50,"km"));
   km--;
   CHECK(km == NumberWithUnits(51,"km"));

   CHECK(++km == NumberWithUnits(51,"km"));

   CHECK(--km == NumberWithUnits(50,"km"));
   
}

TEST_CASE("*,*=")
{
    ton*3;
    CHECK(ton == NumberWithUnits(45,"ton"));

    10*ton;
    CHECK(ton == NumberWithUnits(450,"ton"));

    m*=5;
    CHECK(m== NumberWithUnits(50,"m"));



}