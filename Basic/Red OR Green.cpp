int RedOrGreen( int n, string s ) {
    for ( const char c : s ) if ( c == 'R' ) --n;
    return min( n, int( s.size() ) - n );
} // 0.38+
