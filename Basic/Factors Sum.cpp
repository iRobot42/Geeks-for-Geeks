long long factorSum( int n ) {
    long long fsum{};
    for ( int i{ 1 }, r{ sqrt( n )}; i <= r; ++i ) {
        const int t{ n / i };
        if (!( n % i )) fsum += i + t * ( t != i );
    }
    return fsum;
}
