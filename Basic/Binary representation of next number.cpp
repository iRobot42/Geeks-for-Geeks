string binaryNextNumber( string s ) {
    for ( auto i{ s.rbegin() }; i != s.rend(); ++i )
        if ( *i == '1' ) --*i;
        else return ++*i, s.substr( s.find( '1' ));
    return "1" + s;
} // 0.03+
