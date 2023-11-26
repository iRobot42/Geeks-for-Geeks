int ways( int x, int y ) {
    int d( 1e9+7 ), a[ x+1 ][ y+1 ]{};
    for ( int i{ 0 }; i <= x; ++i ) a[ i ][ 0 ] = 1;
    for ( int i{ 1 }; i <= y; ++i ) a[ 0 ][ i ] = 1;
    for ( int n{ 1 }; n <= x; ++n )
        for ( int m{ 1 }; m <= y; ++m )
            a[ n ][ m ] = ( a[ n-1 ][ m ] + a[ n ][ m-1 ] ) % d;
    return a[ x ][ y ];
}
