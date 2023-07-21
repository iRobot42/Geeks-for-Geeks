int setBit( int n ) {
    return n & n+1 ? n | n+1 : n;
} // 0.01+
