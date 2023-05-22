int search( int a[], int n, int k ) {
    int i{ find( a, a + n, k ) - a };
    return i < n ? ++i : -1;
} // T: 0.36 - 0.39
