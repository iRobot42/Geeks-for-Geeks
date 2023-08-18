int gcd( int n, int a[] ) {
    int r{ *a };
    while ( --n ) r = __gcd( r, a[ n ]);
    return r;
} // 0.15+
