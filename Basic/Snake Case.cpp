string snakeCase( string s, int n ) {
    for ( char& c : s )
        c = c == 32 ? 95 : tolower( c );
    return s;
} // 0.06+
