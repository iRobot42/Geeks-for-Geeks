#define V2

#ifdef V1
vector< int > findUniquePair( int a[], int n ) {
    unordered_map< int, int > m;
    while ( n-- ) ++m[ a[ n ]];
    vector< int > v;
    for ( const auto& p : m )
        if ( p.second == 1 ) v.push_back( p.first );
        else if ( v.size() == 2 ) break;
    return sort( v.begin(), v.end() ), v;
}

#elif defined( V2 )
vector< int > findUniquePair( int a[], int n ) {
    int x{}, n1{}, n2{};
    for ( int i{}; i < n; ++i ) x ^= a[ i ];
    const int m{ -x & x };
    vector< int > v( 2 );
    while ( n-- ) v[ !( a[ n ] & m ) ] ^= a[ n ];
    return sort( v.begin(), v.end() ), v;
}

#endif
