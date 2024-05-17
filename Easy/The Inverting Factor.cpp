int findMinimumInvertingFactor( int a[], int n ) {
    for ( int i{}, t{}; i < n; a[ i++ ] = t, t = 0 )
        do t = t * 10 + a[ i ] % 10; while ( a[ i ] /= 10 );
    sort( a, a + n );
    return *min_element( a + 1, adjacent_difference( a, a + n, a ));
}
