int minProduct( int a[], int n, int k ) {
    sort( a, a + n );
    long p{ 1 }, m( 1e9 + 7 );
    while ( k-- ) ( p *= a[ k ] ) %= m;
    return p;
} // T: 0.08 - 0.09
