string isAdjacentSetBits( long long n ) {
    return n & n >> 1 ? "Yes" : "No";
} // 0.01+
