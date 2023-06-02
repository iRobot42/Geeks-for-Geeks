int getCandidate( int n, int k ) {
    int c{};
    while ( n /= k ) ++c;
    return pow( k, c );
} // T: 0.02+
