int sum( int n ) {
    int s{};
    while ( n ) s += n % 10, n /= 10;
    return s;
}
int countOfNumbers( int n ) {
    int c{};
    for ( int m{ n - 97 }; m < n; ++m ) {
        const int sm{ sum( m ) };
        if ( m + sm + sum( sm ) == n ) ++c;
    }
    return c;
} // 0.01+
