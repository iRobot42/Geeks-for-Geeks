vector< int > sieveOfEratosthenes( int n ) {
    bitset< 10000 > sieve;
    sieve.set();
    for ( int i{ 2 }, r{ sqrt( n )}; i <= r; ++i )
        if ( sieve.test( i ))
            for ( int m{ i * i }; m <= n; m += i )
                sieve.reset( m );
    vector< int > primes;
    for ( int i{ 2 }; i <= n; ++i )
        if ( sieve.test( i )) primes.push_back( i );
    return primes;
} // 0.02+
