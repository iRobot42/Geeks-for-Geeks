long long sum( int a[], int n ) {
    unordered_map< int, int > m;
    long long r{}, p{};
    for ( int i{}; i < n; ++i )
        r += i * a[ i ] - p - m[ a[ i ] - 1 ] + m[ a[ i ] + 1 ],
        p += a[ i ], m[ a[ i ] ]++;
    return r;
} // T: 1.35 - 1.52
