int areAnagram( string s1, string s2 ) {
    array< int, 26 > h{};
    for ( const char c : s1 ) ++h[ c-'a' ];
    for ( const char c : s2 ) --h[ c-'a' ];
    for ( const int i : h ) if ( i ) return 0;
    return 1;
} // 0.01+
