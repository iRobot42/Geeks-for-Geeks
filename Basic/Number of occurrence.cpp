int count( int a[], int n, int x ) {
    return upper_bound( a, a + n, x ) - lower_bound( a, a + n, x );
} // T: 0.26 - 0.28
