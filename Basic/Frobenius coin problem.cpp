vector< int > frobenius( int x, int y ) {
    if ( __gcd( x, y ) > 1 ) return { -1 };
    return { x * y - x - y, --x * --y / 2 };
} // 0.22+
