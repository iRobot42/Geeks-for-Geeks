int MissingNumber( int a[], int b[], int k, int n, int m ) {
    unordered_set< int > s( b, b + m );
    for ( int i{}; i < n; ++i )
        if ( s.find( a[ i ] ) == s.cend() && !--k )
            return a[ i ];
    return -1;
}
