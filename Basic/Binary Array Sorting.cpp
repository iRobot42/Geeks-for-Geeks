void binSort( int a[], int n ) {
    for ( int i{}, z{}; i < n; ++i )
        if ( !a[ i ] ) swap( a[ i ], a[ z++ ] );
} // T: 0.98 - 1.06
