void pushZerosToEnd( int a[], int n ) {
    for ( int i{}, j{}; i < n; ++i )
        if ( a[ i ] ) swap( a[ i ], a[ j++ ] );
}
