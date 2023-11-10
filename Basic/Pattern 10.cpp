void printTriangle( int n ) {
    for ( int i{ 2 * n - 1 }, t{ 1 }; i; --i ) {
        for ( int j{}; j < t; ++j ) cout << "* ";
        cout << '\n';
        i > n ? ++t : --t;
    }
} // 0.01+
