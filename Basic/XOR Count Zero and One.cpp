int find_xor( int n ) {
    const int count1 = bitset< 32 >( n ).count();
    return count1 ^ int( log2( n )) + 1 - count1;
} // 0.01+
