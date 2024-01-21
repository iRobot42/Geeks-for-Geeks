int maxFruits( int a[], int n, int m ) {
    int s{ accumulate( a, a + m, 0 )}, r{ s };
    for ( int i{ m }, j{}; i < n + m; ++i )
        s -= a[ j++ ] - a[ i % n ],
        r = max( r, s );
    return r;
}
