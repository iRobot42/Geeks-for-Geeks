void printTriangle( int n ) {
    for ( int i{ 1 }, c{}; i <= n; ++i ) {
        for ( int j{}; j < i; ++j )
            cout << ++c << ' ';
        cout << '\n';
    }
} // 0.01+
