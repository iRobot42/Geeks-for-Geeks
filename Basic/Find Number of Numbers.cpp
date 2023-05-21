int num( int a[], int n, int k ) {
    int c{};
    while ( n-- )
        do if ( a[ n ] % 10 == k ) c++;
        while ( a[ n ] /= 10 );
    return c;
} // T: 0.01
