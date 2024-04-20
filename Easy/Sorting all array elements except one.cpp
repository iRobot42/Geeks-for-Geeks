int* sortExceptK( int a[], int n, int k ) {
    swap( *a, a[ k ] ), sort( a + 1, a + n );
    for ( int i{}; i < k; ++i ) swap( a[ i ], a[ i+1 ] );
    return a;
}
