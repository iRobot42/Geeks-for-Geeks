long long countPairs( int a[], int n ) {
    if ( n == 1 ) return 0;
    const auto p{ minmax_element( a, a + n )};
    return count( a, a + n, *p.first )
         * count( a, a + n, *p.second );
}
