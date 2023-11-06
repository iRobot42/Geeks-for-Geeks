vector< string > revCharBridge( int n ) {
    string s;
    for ( char c{ 'A' }, C{ 'A' + n }; c < C; ++c ) s += c;
    s += { s.crbegin()+1, s.crend() };
    vector< string > v( n, s );
    int l{}, r{ --n * 2 - 1 };
    do for ( int i{ r }; i > l; --i ) v[ n ][ i ] = ' ';
    while ( --n && ++l < --r );
    return v;
} // 0.01+
