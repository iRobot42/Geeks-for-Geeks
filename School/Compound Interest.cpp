int getCompundInterest( int p, int t, int n, int r ) {
    return p * pow( 1 + 0.01 * r / n, t * n );
} // T: 0.01
