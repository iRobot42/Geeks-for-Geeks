vector< vector< int > > transpose( int a[][ M ], int n ) {
    vector< vector< int > > v( n, vector< int >( M ) );
    for ( int r{}; r < n; ++r )
        for ( int c{}; c < M; ++c )
            v[ r ][ c ] = a[ c ][ r ];
    return v;
} // T: 0.03
