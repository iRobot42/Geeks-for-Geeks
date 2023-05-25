int maxPerimeter( int a[], int n ) {
    sort( a, a + n );
    while ( --n > 1 )
        if ( a[ n ] < a[ n - 1 ] + a[ n - 2 ] )
            return a[ n ] + a[ --n ] + a[ --n ];
    return -1;
} // T: 0.27+
