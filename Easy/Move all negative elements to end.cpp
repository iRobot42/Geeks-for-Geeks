#define V2

#ifdef V1
void segregateElements( int a[], int n ) {
    stable_partition( a, a + n, []( int i ){ return i > 0; });
}

#elif defined( V2 )
void segregateElements( int a[], int n ) {
    vector< int > v;
    v.reserve( n );
    int j{};
    for ( int i{}; i < n; ++i )
        if ( a[ i ] > 0 ) a[ j++ ] = a[ i ];
        else v.push_back( a[ i ] );
    for ( const int i : v ) a[ j++ ] = i;
}

#endif
