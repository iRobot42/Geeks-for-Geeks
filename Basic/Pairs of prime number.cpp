#define V2

#ifdef V1
vector< int > prime_pairs( int n ) {
    const vector< int > primes{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97,
        101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157,
        163, 167, 173, 179, 181, 191, 193, 197, 199 };
    vector< int > pairs;
    for ( const int p : primes )
        for ( const int q : primes )
            if ( p * q <= n ) {
                pairs.push_back( p );
                pairs.push_back( q );
            } else break;
    return pairs;
} // 0.01+

#elif defined( V2 )
bool isPrime( int n ) {
    for ( int f{ 2 }, r{ sqrt( n )}; f <= r; ++f )
        if (!( n % f )) return false;
    return n > 1;
}
vector< int > prime_pairs( int n ) {
    vector< int > primes, pairs;
    for ( int i{ 2 }, l{ n / 2 }; i <= l; ++i )
        if ( isPrime( i )) primes.push_back( i );
    for ( const int p : primes )
        for ( const int q : primes )
            if ( p * q <= n ) {
                pairs.push_back( p );
                pairs.push_back( q );
            } else break;
    return pairs;
} // 0.01+

#endif
