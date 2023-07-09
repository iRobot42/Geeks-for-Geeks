long long MaximumIntegerValue( string s ) {
    long long r{};
    for ( const char c : s )
        r = max( r * ( c-'0' ), r + c-'0' );
    return r;
} // 0.01+
