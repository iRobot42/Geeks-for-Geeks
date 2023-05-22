int firstElement( int a[], int n, int k ) {
    int h[ 1001 ]{};
    for ( int i{}; i < n; ++i )
        h[ a[ i ] ]++;
    for ( int i{}; i < n; ++i )
        if ( h[ a[ i ] ] == k )
            return a[ i ];
    return -1;
} // T: 0.42 - 0.46
