int findRemainder( string n ) {
    int r{};
    for ( const char c : n )
        r = ( r * 10 + c - 48 ) % 7;
    return r;
} // 0.01+
