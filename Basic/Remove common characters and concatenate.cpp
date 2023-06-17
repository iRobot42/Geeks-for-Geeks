string concatenatedString( string s1, string s2 ) {
    string s;
    auto concat{ [ & ]( const auto& a, const auto& b ) {
        vector< int > h( 26 + 'a' );
        for ( const char c : b ) h[ c ] = 1;
        for ( const char c : a ) if ( !h[ c ] ) s += c; }};
    concat( s1, s2 ), concat( s2, s1 );
    return s.empty() ? "-1" : s;
} // T: 0.05+
