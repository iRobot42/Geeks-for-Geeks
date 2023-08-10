void addFraction( int a, int b, int c, int d ) {
    ( a *= d ) += b * c, b *= d, d = __gcd( a, b );
    cout << a / d << '/' << b / d << '\n';
} // 0.01+
