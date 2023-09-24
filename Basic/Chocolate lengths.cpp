int chocolateLength( int n, int a[] ) {
    int length{ *a };
    while ( --n && length > 1 )
        length = __gcd( length, a[ n ] );
    return length;
} // 0.08+
