#define V 2

#if V == 1
bool arraySortedOrNot( vector< int >& a ) {
    return is_sorted( a.cbegin(), a.cend() );
}

#elif V == 2
bool arraySortedOrNot( vector< int >& a ) {
    for ( auto i{ a.size()-1 }; i; --i )
        if ( a[ i ] < a[ i-1 ] ) return false;
    return true;
}

#endif
