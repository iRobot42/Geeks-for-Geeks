long long solve( int a[], int n, int k ) {
    sort( a, a + n );
    const long long s{ accumulate( a, a + n, 0ll ) };
    return max( abs( s - 2 * accumulate( a, a + k, 0ll ) ),
        abs( s - 2 * accumulate( a + n - k, a + n, 0ll ) ) );
} // T: 0.31+
