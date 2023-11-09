string complement( string s ) {
    for ( char& c : s ) c == '1' ? --c : ++c;
    for ( int i{ s.size()-1 }; i >= 0; --i )
        if ( s[ i ] == '1' ) --s[ i ];
        else { ++s[ i ]; break; }
    return s;
} // 0.01+
