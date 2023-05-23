int minDiff( int a[], int n, int k ) {
    sort( a, a + n );
    int r{ a[ --k ] };
    for ( int i{}; k < n; ++i, ++k )
        r = min( r, a[ k ] - a[ i ] );
    return r;
} // T: 0.45 - 0.50
