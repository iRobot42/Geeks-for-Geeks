int divisibleBy11( string s ) {
    int x{};
    for ( const char c : s )
        x = ( x * 10 + c - 48 ) % 11;
    return !x;
} // T: 0.01+
