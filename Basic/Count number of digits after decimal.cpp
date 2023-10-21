int countDecimal( int a, int b ) {
    int c{};
    unordered_set< int > s;
    while ( a %= b )
        if ( s.find( a ) != s.cend() ) return -1;
        else s.insert( a ), a *= 10, ++c;
    return c;
} // 0.01+
