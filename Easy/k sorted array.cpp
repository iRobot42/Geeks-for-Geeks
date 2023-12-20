string isKSortedArray( int a[], int n, int k ) {
    unordered_map< int, int > m;
    for ( int i{}; i < n; ++i ) m[ a[ i ]] = i;
    sort( a, a + n );
    while ( n-- ) if ( abs( m[ a[ n ]] - n ) > k ) return "No";
    return "Yes";
}
