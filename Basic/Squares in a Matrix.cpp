long long squaresInMatrix( int m, int n ) {
    if ( m < n ) swap( m, n );
    return 1ll * n * ( n + 1 ) * ( 3 * m - n + 1 ) / 6;
} // T: 0.02+
