long long getPPS( int a, int b ) {
    bitset< 100000 > sieve;
    sieve.set();
    for ( int i{ 2 }, r{ sqrt( b )}; i <= r; ++i )
        if ( sieve.test( i ))
            for ( int m{ i * i }; m <= b; m += i )
                sieve.reset( m );
    long long sum{};
    for ( a == 1 ? ++a : a; a <= b; ++a )
        if ( sieve.test( a )) {
            int tmp{ a }, rev{};
            do rev = rev * 10 + tmp % 10;
            while ( tmp /= 10 );
            if ( rev == a ) sum += a;
        }
    return sum;
} // 0.05+
