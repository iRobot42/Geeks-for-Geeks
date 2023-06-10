#define V2

#ifdef V1
int divideLadoo( int n, int a[] ) {
    return unordered_set< int >( a, a + n ).size();
} // T: 0.67+

#elif defined( V2 )
int divideLadoo( int n, int a[] ) {
    int s( 1e5 + 1 ), c{};
    bool h[ s ]{};
    while ( n-- ) ++h[ a[ n ] ];
    for ( int i{ 1 }; i < s; ++i )
        if ( h[ i ] ) ++c;
    return c;
} // T: 0.39+

#endif
