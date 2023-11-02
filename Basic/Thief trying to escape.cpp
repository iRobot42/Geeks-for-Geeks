int totalJumps( int x, int y, int n, int a[] ) {
    int c{}, j{ x - y };
    while ( n-- ) c += a[ n ] > x ?
        ceil( double( a[ n ] - y ) / j ) : 1;
    return c;
} // 0.01+
