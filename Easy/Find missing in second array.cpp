vector< int > findMissing( int a[], int b[], int n, int m ) {
    unordered_set< int > bset( b, b + m );
    vector< int > missing;
    for ( int i{}; i < n; ++i )
        if ( bset.find( a[ i ] ) == bset.cend() )
            missing.push_back( a[ i ] );
    return missing;
}
