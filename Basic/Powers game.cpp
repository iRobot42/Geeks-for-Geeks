vector< int > getFreq( int x, int n ) {
    vector< int > v( 10 );
    for ( size_t i{ 1 }, c{ 1 }; i <= n; ++i ) {
        size_t t{ c *= x };
        do v[ t % 10 ]++;
        while ( t /= 10 );
    }
    return v;
} // T: 0.01+
