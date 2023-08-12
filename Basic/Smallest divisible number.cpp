long long getSmallestDivNum( long long n ) {
    long long r{ 1 };
    do r = r * n / __gcd( r, n );
    while ( --n > 1 );
    return r;
} // 0.01+
