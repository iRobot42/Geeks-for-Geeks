long long get( long long n ) {
    for ( long long i{ 1 }; i < n; ++i ) n -= i;
    return n;
} // 0.04+
