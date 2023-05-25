#define V1

#ifdef V1
vector< int > repeatingEven( int a[], int n ) {
    bitset< 64 > b;
    for ( int i{}; i < n; ++i ) b.flip( a[ i ] );
    vector< int > v;
    while ( n-- ) if ( !b[ a[ n ] ] )
        v.push_back( a[ n ] ), b.flip( a[ n ] );
    if ( v.empty() ) return { -1 };
    return sort( v.begin(), v.end() ), v;
} // T: 0.23+

#elif defined( V2 )
vector< int > repeatingEven( int a[], int n ) {
    map< int, int > h;
    while ( n-- ) h[ a[ n ] ]++;
    vector< int > v;
    for ( const auto i : h )
        if ( !( i.second & 1 ) ) v.push_back( i.first );
    return v.empty() ? vector< int >{ -1 } : v;
} // T: 0.4+

#endif
