long long isAmazing( long long n ) {
    const long long m{ sqrt( n )};
    if ( m * m != n ) return 0;
    for ( long long f{ 2 }, r{ sqrt( m )}; f < m; ++f )
        if (!( m % f )) return 0;
    return 1;
} // 0.01+
