string UncommonChars( string a, string b ) {
    bool ha[ 26 ]{}, hb[ 26 ]{};
    for ( const char c : a ) ++ha[ c - 97 ];
    for ( const char c : b ) ++hb[ c - 97 ];
    string s;
    for ( int i{}; i < 26; ++i )
        if ( ha[ i ] ^ hb[ i ] ) s += 97 + i;
    return s.empty() ? "-1" : s;
} // T: 0.02+
