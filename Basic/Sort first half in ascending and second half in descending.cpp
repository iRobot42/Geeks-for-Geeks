void customSort( int a[], int n ) {
    sort( a, a + n / 2 );
    sort( a + n / 2, a + n, greater<>() );
} // T: 0.34+
