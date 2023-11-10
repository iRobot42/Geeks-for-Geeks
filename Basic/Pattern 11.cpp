void printTriangle( int n ) {
    for ( int i{ 1 }; i <= n; ++i ) {
        for ( int j{ i }; j; --j )
            cout << j % 2 << ' ';
        cout << '\n';
    }
} // 0.01+
