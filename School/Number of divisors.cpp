int count_divisors( int n ) {
    if ( n % 3 ) return 0;
    int c{}, r{ sqrt( n ) };
    for ( int i{ 1 }; i <= r; ++i )
        if ( !( n % i ) ) {
            if ( !( i % 3 ) ) c++;
            if ( n / i != i && !( n / i % 3 ) ) c++;
        }
    return c;
} // T: 0.18 - 0.19
