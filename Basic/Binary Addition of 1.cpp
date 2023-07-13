string binaryAdd( int n, string s ) {
    while ( n-- )
        if ( s[ n ] == '1' ) --s[ n ];
        else return ++s[ n ], s;
    return "1" + s;
} // 0.01+
