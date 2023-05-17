int sum( int a[], int n ) {
    return accumulate( a, a + n, 0 );
} // T: 0.24 - 0.26
