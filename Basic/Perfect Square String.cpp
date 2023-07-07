int isSquare( string s ) {
    const int S{ accumulate( s.cbegin(), s.cend(), 0 )};
    return pow( int( sqrt( S )), 2 ) == S;
} // 0.05+
