int findSingle( int n, int a[] ) {
    int x{ *a };
    while ( --n ) x ^= a[ n ];
    return x;
} // T: 0.01
