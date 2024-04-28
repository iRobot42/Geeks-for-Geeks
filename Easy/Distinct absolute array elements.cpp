int distinctCount( int a[], int n ) {
    for ( int i{}; i < n; ++i ) a[ i ] = abs( a[ i ] );
    return unordered_set< int >( a, a + n ).size();
}
