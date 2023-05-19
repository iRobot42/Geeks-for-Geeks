long minOperations( int a[], int n ) {
    const long s{ accumulate( a, a + n, 0l ) };
    if ( s % n ) return -1;
    long c{}, m{ s / n };
    while ( n-- ) c += abs( m - a[ n ] );
    return c / 2;
} // T: 0.18 - 0.20
