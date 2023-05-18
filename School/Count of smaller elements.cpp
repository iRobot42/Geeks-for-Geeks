int countOfElements( int a[], int n, int x ) {
    return upper_bound( a, a + n, x ) - a;
} // T: 0.18 - 0.21
