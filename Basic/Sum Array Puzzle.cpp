void SumArray( int a[], int n ) {
    long sum{ accumulate( a, a + n, 0l ) };
    while ( n-- ) a[ n ] = sum - a[ n ];
} // T: 0.04 - 0.05
