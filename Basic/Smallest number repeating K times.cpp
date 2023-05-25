int findDuplicate( int a[], int n, int k ) {
    int s( 1e5 + 1 ), h[ s ]{};
    while ( n-- ) h[ a[ n ] ]++;
    for ( int i{}; i < s; ++i )
        if ( h[ i ] == k ) return i;
    return -1;
} // T: 0.09+
