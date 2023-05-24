void reverseSubArray( int* a, int n, int l, int r ) {
    reverse( a + --l, a + r );
} // T: 0.31 - 0.33
