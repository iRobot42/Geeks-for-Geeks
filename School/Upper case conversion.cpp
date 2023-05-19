string transform( string s ) {
    auto i{ s.begin() }; *i -= 32;
    while ( ++i < s.end() ) if ( *i == ' ' ) *++i -= 32;
    return s;
} // T: 0.02 - 0.03
