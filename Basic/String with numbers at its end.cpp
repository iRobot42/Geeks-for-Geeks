int isSame( string s ) {
    long i{ s.find_last_not_of( "0123456789" )}, n;
    istringstream( s.substr( ++i )) >> n;
    return i == n;
} // T: 0.01+
