int xorGate( vector< int > a, int n ) {
    return count( a.cbegin(), a.cend(), 1 ) & 1;
} // 0.02+
