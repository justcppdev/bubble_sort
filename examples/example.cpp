#include <iostream>
#include <sstream>
#include <vector>

#include "bubble_sort.hpp"

int main()
{
    for( std::string string; std::getline( std::cin, string ); ) {
        std::vector<int> numbers;
        std::istringstream stream( string );
        std::copy( std::istream_iterator<int>( stream ),
                   std::istream_iterator<int>(),
                   std::back_inserter( numbers ) );
        
        bubble_sort( numbers.begin(), numbers.end() );

        std::copy( numbers.begin(), numbers.end(), std::ostream_iterator<int>{ std::cout, " " } );
        std::cout << std::endl;
    }
}
