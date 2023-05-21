void printPattern( int n ) {
    for ( int i{ 1 }; i <= n; ++i ) {
        for ( int j{ i }; j; --j )
            cout << '*';
        cout << ' ';
    }
} // T: 0.09 - 0.10
