char getMaxOccuringChar( string s ) {
    int h[ 26 ]{};
    for ( const char c : s ) ++h[ c-'a' ];
    return max_element( h, h+26 ) - h + 'a';
} // T: 0.01+
