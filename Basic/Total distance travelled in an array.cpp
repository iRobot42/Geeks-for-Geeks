#define V2

#ifdef V1
long long distance( int a[], int n ) {
    int h[ n + 1 ]{};
    for ( int i{}; i < n; ++i ) h[ a[ i ] ] = i;
    long long d{};
    while ( --n ) d += abs( h[ n ] - h[ n + 1 ] );
    return d;
} // T: 0.17+

#elif defined( V2 )
long long distance( int a[], int n ) {
    vector< int > h( n );
    while ( --n ) h[ --a[ n ] ] = n;
    return accumulate( h.begin(), h.end() - 1, 0ll,
        []( auto& d, int& x ){ return d + abs( x - *next( &x ) ); } );
} // T: 0.19+

#endif
