long long commDiv( long long a, long long b ) {
    long long count{}, gcd{ __gcd( a, b )};
    for ( long long i{ 1 }, r{ sqrt( gcd )}; i <= r; ++i )
        if (!( gcd % i )) count += 1 + ( i * i != gcd );
    return count;
} // 0.01+
