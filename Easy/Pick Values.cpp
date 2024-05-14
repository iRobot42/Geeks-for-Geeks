int pickValues( int a[], int n ) {
    if ( n < 4 ) return *min_element( a, a + n );
    for ( int i{ 4 }; i < n; ++i )
        a[ i ] += *min_element( a + i - 4, a + i );
    return *min_element( a + n - 4, a + n );
}
