int firstNonRepeating( int a[], int n ) {
    unordered_map< int, int > m;
    for ( int i{}; i < n; ++i ) ++m[ a[ i ]];
    for ( int i{}; i < n; ++i )
        if ( m[ a[ i ]] == 1 ) return a[ i ];
    return 0;
}
