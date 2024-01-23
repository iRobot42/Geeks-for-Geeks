vector< int > assign( int a[], int n ) {
    sort( a, a + n );
    vector< int > v( n );
    for ( int i{}, g{ n }; i < n; ++i )
        v[ i ] = a[ i & 1 ? --g : i / 2 ];
    return v;
}
