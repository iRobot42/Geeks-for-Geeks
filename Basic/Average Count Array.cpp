vector< int > countArray( int a[], int n, int x ) {
    vector< int > v( n );
    for ( int i{}; i < n; ++i )
        v[ i ] = count( a, a + n, ( a[ i ] + x ) / 2 );
    return v;
} // T: 0.01+
