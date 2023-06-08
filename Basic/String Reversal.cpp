string reverseString( string s ) {
    bool h[ 26 ]{};
    auto i{ s.rbegin() }, j{ i };
    do if ( !h[ *i - 'A' ] && *i != ' ' )
        *j++ = *i, ++h[ *i - 'A' ];
    while ( ++i != s.rend() );
    return { s.rbegin(), j };
} // T: 0.52+
