vector< int > getMoreAndLess( int a[], int n, int x ) {
    return { upper_bound( a, a + n, x ) - a,
             n - ( lower_bound( a, a + n, x ) - a ) };
} // T: 0.25 - 0.27
