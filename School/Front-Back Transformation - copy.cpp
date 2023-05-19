string convert( string s ) {
    for ( char& c : s ) c = ( islower( c ) ? 219 : 155 ) - c;
    return s;
} // T: 0.04 - 0.05
