void convert( int a[], int n ) {
    vector< pair< int, int >> v( n );
    for ( int i{}; i < n; ++i )
        v[ i ] = { a[ i ], i };
    sort( v.begin(), v.end() );
    while ( n-- ) a[ v[ n ].second ] = n;
}
