long long pairAndSum( int n, long long a[] ) {
    constexpr int BITS{ 8 * sizeof( n )};
    long long sum{};
    for ( int i{}; i < BITS; ++i ) {
        const long long c{ count_if( a, a + n,
            [ i ]( int e ){ return e & 1 << i; })};
        sum += ( 1 << i ) * c * ( c - 1 ) >> 1;
    }
    return sum;
} // 0.38+
