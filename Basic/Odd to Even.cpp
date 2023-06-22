string makeEven( string s ) {
    size_t i{ s.find_first_of( "02468" )};
    if ( i == string::npos ) return s;
    for ( size_t j{ i + 1 }; j < s.size() && s[ i ] > s.back(); ++j )
        if ( !( s[ j ] & 1 )) i = j;
    return swap( s[ i ], s.back() ), s;
} // T: 0.01+
