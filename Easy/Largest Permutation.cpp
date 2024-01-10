void KswapPermutation( int a[], int n, int k ) {
    vector< int > v( n+1 );
    for ( int i{}; i < n; ++i ) v[ a[ i ]] = i;
    for ( int i{}, j{ n }; i < n && k; ++i, --j )
        if ( a[ i ] != j ) {
            v[ a[ i ]] = v[ j ];
            swap( a[ i ], a[ v[ j ]] );
            v[ j ] = i;
            --k;
        }
}
