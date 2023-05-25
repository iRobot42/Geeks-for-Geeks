int multiply( int a[], int n ) {
    return accumulate( a, a + n / 2, 0 ) *
           accumulate( a + n / 2, a + n, 0 );
} // T: 0.01+
