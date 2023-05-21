int search( int a[], int n, int x ) {
    const auto i{ find( a, a + n, x ) };
    return i != a + n ? i - a : -1;
} // T: 0.22 - 0.25
