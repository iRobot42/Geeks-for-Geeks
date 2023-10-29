vector< int > sophie_Primes( int n ) {
    const int s{ 2 * n };
    vector< int > sieve( s, 1 ), sophie;
    for ( int i{ 2 }, r{ sqrt( s )}; i <= r; ++i )
        if ( sieve[ i ] )
            for ( int m{ i * i }; m < s; m += i )
                sieve[ m ] = 0;
    for ( int p{ 2 }; p < n; ++p )
        if ( sieve[ p ] && sieve[ 2 * p + 1 ] )
            sophie.push_back( p );
    return sophie;
} // 0.03+
