void rearrangeArray( int a[], int n ) {
    int b[ n ];
    memcpy( b, a, n * sizeof( int ) );
    sort( b, b + n );
    for ( int i{}, l{}, r{ --n }; l <= r; ++i )
        a[ i ] = b[ l++ ], a[ ++i ] = b[ r-- ];
} // T: 0.6+
