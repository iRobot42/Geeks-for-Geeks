void printTriangle( int n ) {
    int i{ -1 };
    while ( n-- ) cout << string( n, ' ' ) << string( i += 2, '*' ) << '\n';
} // 0.01+
