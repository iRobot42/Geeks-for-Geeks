vector< int > RopeCutting( int a[], int n ) {
    sort( a, a + n );
    vector< int > r;
    for ( int i{ 1 }; i < n; ++i )
        if ( a[ i ] > a[ i - 1 ] )
            r.push_back( n - i );
    return r;
}
