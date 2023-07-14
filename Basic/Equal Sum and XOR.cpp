int countValues( int n ) {
    int c{};
    for ( int i{}; i < n; ++i )
        c += ( n ^ i ) == n + i;
    return c;
} // 0.01+
