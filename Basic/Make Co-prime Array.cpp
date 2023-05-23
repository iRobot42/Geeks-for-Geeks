int countCoPrime( int a[], int n ) {
    int c{};
    while ( --n )
        if ( __gcd( a[ n ], a[ n - 1 ] ) != 1 ) c++;
    return c++;
} // T: 0.27 - 0.30
