int lastIndex( string s ) {
    const int i{ s.find_last_of( '1' ) };
    return i == string::npos ? -1 : i;
} // T: 0.26 - 0.28
