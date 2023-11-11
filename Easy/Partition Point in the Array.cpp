int FindElement( int a[], int n ) {
    vector< int > g( n ), s( n, 1e6 );
    for ( int i{ 1 }, j{ n - 2 }; i < n; ++i, --j )
        g[ i ] = max( g[ i - 1 ], a[ i - 1 ] ),
        s[ j ] = min( s[ j + 1 ], a[ j + 1 ] );
    for ( int i{}; i < n; ++i )
        if ( a[ i ] > g[ i ] && a[ i ] < s[ i ] )
            return a[ i ];
    return -1;
}
