int firstElementKTime( int a[], int n, int k ) {
    unordered_map< int, int > m;
    for ( int i{}; i < n; ++i )
        if ( ++m[ a[ i ] ] == k )
            return a[ i ];
    return -1;
} // T: 0.09+
