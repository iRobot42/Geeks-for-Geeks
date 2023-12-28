void update( int a[], int n, int u[], int k ) {
    while ( k ) ++a[ --u[ --k ]];
    while ( ++k < n ) a[ k ] += a[ k-1 ];
}
