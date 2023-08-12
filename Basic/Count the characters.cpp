int getCount( string s, int n ) {
    int h[ 26 ]{};
    for ( int i{}; i < s.size(); ++i )
        if ( s[ i ] != s[ i + 1 ]) ++h[ s[ i ] - 97 ];
    return count( h, h + 26, n );
} // T: 0.05+
