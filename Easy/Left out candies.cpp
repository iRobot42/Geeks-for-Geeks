long long leftCandies( long long n, long long m ) {
    auto s{ []( long long i ){ return i * ( i + 1 ) / 2; }};
    return ( m %= s( n )) - s( sqrt( 2 * m + 0.25 ) - 0.5 );
}
