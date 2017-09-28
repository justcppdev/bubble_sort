#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include <algorithm>

template <typename _ForwardIterator>
void bubble_sort( _ForwardIterator first, _ForwardIterator last )
{
    if( first != last ) {
        bool sorted = false;
        while( !sorted ) {
            sorted = true;
            auto next = first;
            auto current = next++;
            for( ; next != last; ++current, ++next ) {
                if( *next < *current ) {
                    std::iter_swap( next, current );
                    sorted = false;
                }
            }
            --last;
        }
    }
}

#endif 
