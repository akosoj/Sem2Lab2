#include <testclass.h>
#include <catch.hpp>

SCENARIO ("getDollarPriceCheck", "[Book::getDollPrice]"){
    Book obj;
	obj.price = 180;
	double x = 60;

    double rv = Book::getDollPrice(x);
        REQUIRE ( rv == 3 );
}
