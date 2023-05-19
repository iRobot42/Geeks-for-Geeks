string to_upper( string s ) {
    for ( auto& c : s ) c -= 32;
    return s;
} // T: 0.01
