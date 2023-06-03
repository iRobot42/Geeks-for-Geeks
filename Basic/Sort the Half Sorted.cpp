void sortHalves( int a[], int n ) {
    int l{}, r{}, b[ n ], i{};
    while ( a[ r ] <= a[ ++r ] );
    const int t{ r };
    while ( l < t && r < n )
        b[ i++ ] = a[ a[ l ] <= a[ r ] ? l++ : r++ ];
    while ( l < t ) b[ i++ ] = a[ l++ ];
    while ( r < n ) b[ i++ ] = a[ r++ ];
    while ( i-- ) a[ i ] = b[ i ]; // or memcpy
} // T: 0.47+
