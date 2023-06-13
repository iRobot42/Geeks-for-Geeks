int findMaxSum( int n, int m, vector< vector< int >> M ) {
    if ( n-- < 3 || m-- < 3 ) return -1;
    int s{}, c{ m };
    while ( --n ) { while ( --m ) s = max( s, M[ n ][ m ] +
        M[ n-1 ][ m-1 ] + M[ n-1 ][ m ] + M[ n-1 ][ m+1 ] +
        M[ n+1 ][ m-1 ] + M[ n+1 ][ m ] + M[ n+1 ][ m+1 ] );
        m = c; }
    return s;
} // T: 0.19+
