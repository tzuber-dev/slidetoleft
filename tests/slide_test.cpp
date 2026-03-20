#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/slide.hpp"

TEST_CASE( "Array made shift of 3 to left" ) {

    int array[5] = {1, 2, 3, 4, 5};
    arrayShift(array,5,3);
    REQUIRE(array[0] == 4);
    REQUIRE(array[1] == 5);
    REQUIRE(array[2] == 1);
    REQUIRE(array[3] == 2);
    REQUIRE(array[4] == 3);

}





TEST_CASE( "Shift = size" ) {

    int array[5] = {1, 2, 3, 4, 5};
    arrayShift(array,5,5);
    REQUIRE(array[0] == 1);
    REQUIRE(array[1] == 2);
    REQUIRE(array[2] == 3);
    REQUIRE(array[3] == 4);
    REQUIRE(array[4] == 5);

}

TEST_CASE( "Array made shift of 2 left" ) {

    int array[5] = {1, 2, 3, 4, 5};
    arrayShift(array,5,2);
    REQUIRE(array[0] == 3);
    REQUIRE(array[1] == 4);
    REQUIRE(array[2] == 5);
    REQUIRE(array[3] == 1);
    REQUIRE(array[4] == 2);

}


TEST_CASE( "Array made shift of 1" ) {

    int array[5] = {1, 2, 3, 4, 5};
    arrayShift(array,5,1);
    REQUIRE(array[0] == 2);
    REQUIRE(array[1] == 3);
    REQUIRE(array[2] == 4);
    REQUIRE(array[3] == 5);
    REQUIRE(array[4] == 1);

}
