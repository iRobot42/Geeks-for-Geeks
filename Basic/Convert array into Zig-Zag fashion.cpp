void zigZag( int a[], int n ) {
    while ( --n )
        if (   n & 1   && a[ n ] < a[ n - 1 ] ||
            !( n & 1 ) && a[ n ] > a[ n - 1 ] )
            swap( a[ n ], a[ n - 1 ] );
} // T: 1.50 - 1.63
