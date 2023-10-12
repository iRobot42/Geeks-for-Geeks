int factorProduct( int n ) {
    long p{ 1 }, d( 1e9 + 7 );
    for ( int f{ 1 }, t, r{ sqrt( n )}; f <= r; ++f )
        if (!( n % f )) {
            p = p * f % d;
            if (( t = n / f ) > r ) p = p * t % d;
        }
    return p;
} // 0.30+
