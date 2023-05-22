int Maximize( int a[], int n ) {
    sort ( a, a + n );
    long s{}, m( 1e9 + 7 );
    while ( n-- ) ( s += 1l * n * a[ n ] ) %= m;
    return s;
} // T: 0.64 - 0.69
