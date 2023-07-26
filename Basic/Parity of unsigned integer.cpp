string computeParity( int n ) {
    //return bitset< 18 >( n ).count() & 1 ? "odd" : "even";
    return __builtin_popcount( n ) & 1 ? "odd" : "even";
} // 0.01+
