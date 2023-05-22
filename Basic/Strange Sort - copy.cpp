void strangeSort( int a[], int n, int k ) {
    int temp{ a[ --k ] };
    a[ k ] = 0;
    sort( a, a + n );
    *a = temp;
    for ( n = 0; n < k; ++n )
        swap( a[ n ], a[ n + 1 ] );
} // T: 0.26 - 0.29
