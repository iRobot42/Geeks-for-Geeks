vector< int > findTriplet( int a[], int n ) {
    sort( a, a + n );
    for ( int i{}; i < n - 2; ++i )
        for ( int j{ i + 1 }; j < n - 1; ++j ) {
            int sum{ a[ i ] + a[ j ] };
            for ( int k{ j + 1 }; a[ k ] <= sum; ++k )
                if ( a[ k ] == sum )
                    return { a[ i ], a[ j ], a[ k ] };
        }
    return {};
} // T: 0.01 - 0.02
