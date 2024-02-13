int uneatenLeaves( int a[], int n, int k ) {
    vector< bool > v( ++n );
    for ( int i{}; i < k; ++i ) if (!( v[ a[ i ]] ))
        for ( int j{ a[ i ] }; j < n; j += a[ i ] )
            v[ j ] = true;
    return count( ++v.cbegin(), v.cend(), false );
}
