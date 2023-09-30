long long numberOfWays( long long n ) {
    long long a{ 1 }, b{ 1 }, d( 1e9+7 );
    for ( long long i{ 2 }; i <= n; ++i )
        swap(( a += b ) %= d, b );
    return b;
} // 0.03+
