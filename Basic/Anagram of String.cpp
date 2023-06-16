int remAnagram( string s1, string s2 ) {
    vector< int > f( 26 ); int x{};
    for ( const char c : s1 ) ++f[ c - 'a' ];
    for ( const char c : s2 ) --f[ c - 'a' ];
    for ( const int i : f ) x += abs( i );
    return x;
} // T: 0.01+
