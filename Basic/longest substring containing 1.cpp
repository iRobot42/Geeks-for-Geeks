int maxlength( string s ) {
    int i{}, t{};
    for ( const char c : s )
        c == '1' ? i = max( i, ++t ) : t = 0;
    return i;
} // T: 0.01+
