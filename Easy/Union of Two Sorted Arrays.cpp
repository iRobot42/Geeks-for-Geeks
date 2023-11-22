#define V2

#ifdef V1
vector< int > findUnion( int a1[], int a2[], int n, int m ) {
    constexpr int s( 1e5+1 );
    vector< int > h( s ), r;
    while ( n-- ) h[ a1[ n ]] = 1;
    while ( m-- ) h[ a2[ m ]] = 1;
    for ( int i{ 1 }; i < s; ++i )
        if ( h[ i ] ) r.push_back( i );
    return r;
}

#elif defined( V2 )
vector< int > findUnion( int a1[], int a2[], int n, int m ) {
    set< int > s( a1, a1 + n );
    while ( m-- ) s.insert( a2[ m ] );
    return { s.cbegin(), s.cend() };
}

#endif
