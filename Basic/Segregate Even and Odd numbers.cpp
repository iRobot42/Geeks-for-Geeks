void segregateEvenOdd( int a[], int n ) {
    int c{};
    for ( int i{}; i < n; ++i )
        if ( !( a[ i ] & 1 ) )
            swap( a[ i ], a[ c++ ] );
    sort( a, a + c ), sort( a + c, a + n );
} // T: 0.25 - 0.27
