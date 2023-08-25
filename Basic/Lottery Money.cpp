long long totalMoney( long long n ) {
    long long m{ 3 };
    while ( m < n ) n -= m, m *= 2;
    return ++m - n;
} // 0.01+
