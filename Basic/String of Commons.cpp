string common_String( string s1, string s2 ) {
    char m[ CHAR_MAX ]{};
    for ( const char c : s1 ) m[ c ] = 1;
    for ( const char c : s2 )
        if ( m[ c ] == 1 ) ++m[ c ];
    string s;
    for ( char c{ 'A' }; c <= 'z'; ++c )
        if ( m[ c ] > 1 ) s += c;
    return s.empty() ? "nil" : s;
} // 0.04+
