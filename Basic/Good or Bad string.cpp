int isGoodorBad( string s ) {
    int v{}, c{};
    for ( const char i : s ) {
        if ( i == '?' ) ++v, ++c;
        else if ( "aeiou"s.find( i ) != -1 ) ++v, c = 0;
        else ++c, v = 0;
        if ( v > 5 || c > 3 ) return 0;
    }
    return 1;
} // 0.03+
