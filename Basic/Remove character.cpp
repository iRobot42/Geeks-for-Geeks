string removeChars( string s1, string s2 ) {
    array< bool, 26 > h{};
    for ( const char c : s2 ) h[ c-'a' ] = true;
    string s;
    for ( const char c : s1 ) if ( !h[ c-'a' ] ) s += c;
    return s;
} // 0.01+
