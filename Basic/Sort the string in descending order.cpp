string ReverseSort( string s ) {
    int h[ 26 ]{};
    for ( const char c : s ) ++h[ c - 'a' ];
    for ( int i{ 25 }, j{}; i >= 0; --i )
        while ( h[ i ]-- ) s[ j++ ] = char( i + 'a' );
    return s;
} // T: 0.05+
