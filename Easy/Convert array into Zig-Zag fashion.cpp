void zigZag( int a[], int n ) {
    while ( --n )
        if ( n % 2 != 0 && a[ n ] < a[ n-1 ] ||
             n % 2 == 0 && a[ n ] > a[ n-1 ] )
            swap( a[ n ], a[ n-1 ] );
}
