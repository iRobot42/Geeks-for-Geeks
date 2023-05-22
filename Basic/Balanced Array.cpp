int minValueToBalance( int a[], int n ) {
    return abs( accumulate( a, a + n / 2, 0 ) -
                accumulate( a + n / 2, a + n, 0 ) );
} // T: 0.21 - 0.25
