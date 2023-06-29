bool isEven( string s, int n ) {
    return !( s.at( s.find_last_not_of( ".0" )) & 1 );
} // T: 0.01+
