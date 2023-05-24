int firstIndex( int a[], int n ) {
    return a[ n - 1 ] ? lower_bound( a, a + n, 1 ) - a : -1;
} // T: 1.25 - 1.36
