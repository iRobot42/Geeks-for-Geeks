void swapElements( int a[], int s ) {
    for ( int i{ 2 }; i < s; ++i )
        swap( a[ i ], a[ i-2 ] );
}
