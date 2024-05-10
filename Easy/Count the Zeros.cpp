int countZeroes( int a[], int n ) {
    return n - distance( a, lower_bound( a, a + n, 0, greater<>() ));
}
