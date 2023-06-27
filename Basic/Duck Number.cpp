bool check_duck( string s ) {
    return s.find( '0', s.find_first_not_of( '0' )) != -1;
} // T: 0.01+
