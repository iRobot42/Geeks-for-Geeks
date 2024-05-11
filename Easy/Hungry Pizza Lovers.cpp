vector< int > permute( vector< vector< int >>& a, int n ) {
    vector< pair< int, int >> vp( n );
    for ( int i{}; i < n; ++i )
        vp[ i ] = { a[ i ][ 0 ] + a[ i ][ 1 ], i + 1 };
    sort( vp.begin(), vp.end() );
    vector< int > v( n );
    for ( int i{}; i < n; ++i ) v[ i ] = vp[ i ].second;
    return v;
}
