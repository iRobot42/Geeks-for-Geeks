string firstRepChar( string s ) {
    bool h[ 26 ]{};
    for ( const char c : s )
        if ( h[ c - 'a' ]++ )
            return ""s + c;
    return "-1";
} // T: 0.05+
