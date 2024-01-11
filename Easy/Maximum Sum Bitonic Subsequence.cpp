int maxSumBS( int a[], int n ) {
    vector< int > v1( a, a + n ), v2{ v1 };
    for ( int i{ 1 }; i < n; ++i )
        for ( int j{}; j < i; ++j )
            if ( a[ i ] > a[ j ] )
                v1[ i ] = max( v1[ i ], v1[ j ] + a[ i ] );
    for ( int i{ n-2 }; i >= 0; --i )
        for ( int j{ n-1 }; j > i; --j )
            if ( a[ i ] > a[ j ] )
                v2[ i ] = max( v2[ i ], v2[ j ] + a[ i ] );
    int r{};
    while ( n-- ) r = max( r, v1[ n ] + v2[ n ] - a[ n ] );
    return r;
}
