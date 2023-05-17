int sumElement( int a[], int n ) {
    return accumulate( a, a + n, 0 );
} // T: 0.01 - 0.02
