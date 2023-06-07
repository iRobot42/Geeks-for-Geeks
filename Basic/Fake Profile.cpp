string solve( string a ) {
    unordered_set< char > h;
    for ( const char c : a )
        if ( "aeiou"s.find( c ) == string::npos )
            h.insert( c );
    return h.size() & 1 ? "HE!" : "SHE!";
} // T: 0.01+
