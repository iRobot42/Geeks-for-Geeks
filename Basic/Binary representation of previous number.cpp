string binaryPreviousNumber( string s ) {
    for ( auto i{ s.rbegin()}; i != s.rend(); ++i )
        if ( *i == '0' ) ++*i;
        else { --*i; break; };
    const size_t i{ s.find( '1' )};
    return i == string::npos ? "0" : s.substr( i );
} // 0.03+
