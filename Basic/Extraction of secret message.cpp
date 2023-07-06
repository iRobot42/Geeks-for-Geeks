string ExtractMessage( string s ) {
    string r;
    for ( size_t i{}; i < s.size(); ++i )
        if ( s.substr( i, 3 ) == "LIE" )
            r += r.back() == ' ' ? "" : " ", i += 2;
        else r += s[ i ];
    return r.substr( r.front() == ' ' );
} // 0.09+
