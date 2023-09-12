long long divSum( long long n ) {
    long long sum{}, root{ sqrt( n )};
    for ( long long i{ 2 }; i <= root; ++i )
        if (!( n % i )) {
            const long long j{ n / i };
            sum += i + ( j > i ? j : 0 );
        }
    return ++sum;
} // 0.01+
