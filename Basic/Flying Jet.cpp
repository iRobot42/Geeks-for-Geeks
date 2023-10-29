long long Nth_mileSpeed( int n ) {
    return n & 1 ? pow( n+1 >> 1, 4 ) : 7 * pow( 3, n-2 >> 1 );
} // 0.01+
