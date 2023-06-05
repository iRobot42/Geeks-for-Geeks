bool isIsogram( string s ) {
    bool h[ 26 ]{};
    for ( const char c : s )
        if ( h[ c - 97 ]++ ) return false;
    return true;
} // T: 0.01+
