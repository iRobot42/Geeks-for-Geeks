vector< long long > factorialNumbers( long long n ) {
    vector< long long > v;
    long long i{ 1 }, f{ 1 };
    while ( f <= n ) v.push_back( f ), f *= ++i;
    return v;
} // 0.01+
