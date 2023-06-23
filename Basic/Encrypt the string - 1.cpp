string encryptString( string s ) {
    string r;
    for ( size_t i{}, c{ 1 }; i < s.size(); ++i )
        if ( s[ i ] == s[ i + 1 ] ) ++c;
        else r += s[ i ] + to_string( c ), c = 1;
    return { r.crbegin(), r.crend() };
} // T: 0.17+
