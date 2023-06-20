string removeSpecialCharacter( string s ) {
    string r;
    for ( const char c : s )
        if ( isalpha( c ) ) r += c;
    return r.empty() ? "-1" : r;
} // T: 0.1+
