vector< string > interestingPattern( int n ) {
    int l{}, r{ 2 * n - 1 };
    vector< string > v( r );
    string s( r, '1' );
    do { const char c{ n + '0' };
        for ( int i{ l }; i < r; ++i ) s[ i ] = c;
        v[ l++ ] = v[ --r ] = s;
    } while ( --n );
    return v;
} // 0.01+
