void reverseInGroups( vector< long long >& a, int n, int k ) {
    int i{};
    for ( i; i + k < n; i += k )
        reverse( &a[ i ], &a[ i + k ] );
    if ( i < n ) reverse( &a[ i ], &a[ n ] );
} // T: 0.52 - 0.57
