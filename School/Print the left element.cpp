int leftElement( int a[], int n ) {
    return sort( a, a + n ), a[ --n / 2 ];
} // T: 2.43 - 2.63
