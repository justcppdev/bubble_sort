#include <catch.hpp>
#include <vector>

#include "bubble_sort.hpp"

TEST_CASE("sorting sorted array using assignment", "") {
    std::vector<int> array = {4, 8, 15, 16, 23, 42};
    std::vector<int> expected = {4, 8, 15, 16, 23, 42};
    
    bubble_sort( array.begin(), array.end() );

    REQUIRE( array == expected );
}

TEST_CASE("sorting sorted array using swap", "") {
    std::vector<int> array = {4, 8, 15, 16, 23, 42};
    std::vector<int> expected = {4, 8, 15, 16, 23, 42};
    
    bubble_sort( array.begin(), array.end() );

    REQUIRE( array == expected );
}
