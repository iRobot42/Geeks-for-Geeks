long long canBeSumofConsec( long long n ) {
    // return pow( 2, floor( log2( n ))) != n;
    // return __builtin_popcount( n ) != 1;
    return bitset< 64 >( n ).count() != 1;
} // 0.01+
