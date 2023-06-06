int getCount( string s, int n ) {
    int c{}, h[ 26 ]{};
    for ( int i{}; i < s.size(); ++i )
        if ( s[ i ] != s[ i + 1 ] ) ++h[ s[ i ] - 97 ];
    return count_if( h, h + 26, [ n ]( int i ){ return i == n; } );
} // T: 0.05+
