int findPosition( int n ) {
    // return bitset< 32 >( n ).count() != 1 ? -1 : log2( n ) + 1;
    // return __builtin_popcount( n ) != 1 ? -1 : log2( n ) + 1;
    return !n || n & n-1 ? -1 : log2( n ) + 1;
} // 0.01+
