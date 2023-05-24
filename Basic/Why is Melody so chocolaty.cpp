int max_adjacent_sum( int a[], int n ) {
    int s{ *a + a[ 1 ] };
    while ( --n ) s = max( s, a[ n ] + a[ n - 1 ] );
    return s;
} // T: 0.17+
