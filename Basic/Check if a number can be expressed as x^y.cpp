int checkPower( int n ) {
    for ( int i{ 2 }, r{ sqrt( n )}; i <= r; ++i ) {
        int t{ i };
        while ( t < n ) t *= i;
        if ( t == n ) return 1;
    }
    return n == 1;
} // 0.01+
