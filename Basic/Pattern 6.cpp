void printTriangle( int n ) {
    do {
        for ( int i{ 1 }; i <= n; ++i )
            cout << i << ' ';
        cout << '\n';
    } while ( --n );
} // 0.01+
