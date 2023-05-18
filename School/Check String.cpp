bool check( string s ) {
    return s.find_first_not_of( s[ 0 ] ) == string::npos;
} // T: 0.40 - 0.43
