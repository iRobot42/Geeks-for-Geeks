string firstRepChar( string s ) {
    bool h[ 26 ]{};
    for ( const char c : s )
        if ( h[ c-'a' ]++ )
            return string{ c };
    return "-1";
}
