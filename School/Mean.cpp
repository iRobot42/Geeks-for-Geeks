int mean( int n, int a[] ) {
    return accumulate( a, a + n, 0 ) / n;
} // T: 0.10 - 0.11
