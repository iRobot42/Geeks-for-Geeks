bool isToepliz( int a[ MAX ][ MAX ], int n, int m ) {
    while ( --n ) for ( int i{ 1 }; i < m; ++i )
        if ( a[ n ][ i ] != a[ n - 1 ][ i - 1 ] )
            return false;
    return true;
} // T: 0.01
