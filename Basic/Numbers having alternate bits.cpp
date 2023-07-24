long long bitsAreInAltOrder( long long n ) {
    // return !(( n ^= n/2 ) & n+1 );
    return bitset< 64 >( n ^ n >> 2 ).count() == 1;
} // 0.01+
