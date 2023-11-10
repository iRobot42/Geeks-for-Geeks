void printTriangle( int n ) {
    for ( int i{}, j{ 2 * n - 1 }; i < n; ++i, j -= 2 )
        cout << string( i, ' ' ) << string( j, '*' ) << '\n';
} // 0.01+
