string removeDuplicates( string s ) {
    bool a[ CHAR_MAX ]{};
    string r;
    for ( const char c : s )
        if ( !a[ c ] ) r += c, a[ c ] = true;
    return r;
}
