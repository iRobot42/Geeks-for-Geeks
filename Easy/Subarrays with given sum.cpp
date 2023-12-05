int subArraySum( int a[], int n, int s ) {
    int c{};
    unordered_map< int, int > m{{ 0, 1 }};
    for ( int i{}, p{}; i < n; ++i )
        p += a[ i ], c += m[ p - s ], ++m[ p ];
    return c;
}
