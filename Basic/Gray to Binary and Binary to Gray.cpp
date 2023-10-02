string binToGrey( string b ) {
    string g{ b.front() };
    g.reserve( b.size() );
    for ( size_t i{ 1 }; i < b.size(); ++i )
        g += ( b[ i ] != b[ i-1 ] ) + '0';
    return g;
}
string greyToBin( string s ) {
    for ( size_t i{ 1 }; i < s.size(); ++i )
        if ( s[ i ] == '0' ) s[ i ] = s[ i-1 ];
        else s[ i ] = ( s[ i-1 ] == '0' ) + '0';
    return s;
}
