int diagonalSumDifference( int n, vector< vector< int > > v ) {
    int d1{}, d2{};
    for ( int i{}; i < n; ++i ) {
        d1 += v[ i ][ i ];
        d2 += v[ i ][ n - 1 - i ];
    }
    return abs( d1 - d2 );
} // T: 0.56 - 0.60
