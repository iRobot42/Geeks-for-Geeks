int maxDistinctNum( int a[], int n, int k ) {
    return min( int( unordered_set< int >( a, a + n ).size() ), n - k );
}
