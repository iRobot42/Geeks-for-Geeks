int hasThreePrimeFac( long long n ) {
    for ( long long f{ 2 }, r{ sqrt( n )}; f < r; ++f )
        if (!( n % f )) return 0;
    return n > 1;
} // 0.01+
