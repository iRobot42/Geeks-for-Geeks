string removeCharacters( string S ) {
    string s;
    for ( const char c : S )
        if ( isdigit( c ) ) s += c;
    return s;
} // T: 0.02
