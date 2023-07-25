int bitMultiply( int n ) {
    return n * bitset< 32 >( n ).count();
} // 0.01+
