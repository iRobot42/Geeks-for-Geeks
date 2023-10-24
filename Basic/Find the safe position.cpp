int find_pos( int n ) {
    return n == 1 ? n : ( find_pos( n-1 ) + 1 ) % n + 1;
} // 0.11+
