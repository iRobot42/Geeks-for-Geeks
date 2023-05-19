string reciprocalString( string s ) {
    for ( char& c : s )
        c = islower( c ) ? 219 - c :
            isupper( c ) ? 155 - c : c;
    return s;
} // T: 0.01
