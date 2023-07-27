int DifferOne( long a, long b ) {
    //return __builtin_popcount( a ^ b ) == 1;
    return bitset< 32 >( a ^ b ).count() == 1;
} // 0.01+
