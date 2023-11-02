long long sumofproduct( int n ) {
    long long sum{};
    for ( int i{ 1 }; i <= n; ++i )
        sum += n / i * i;
    return sum;
} // 0.01+
