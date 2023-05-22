int missingNumber( int a[], int n ) {
    return n * ( n + 1 ) / 2 - accumulate( a, a + --n, 0 );
} // T: 0.30 - 0.33
