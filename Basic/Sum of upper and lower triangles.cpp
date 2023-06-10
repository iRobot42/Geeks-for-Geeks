vector< int > sumTriangles( const vector< vector< int >>& m, int n ) {
    int upper{}, lower{};
    for ( int r{}; r < n; ++r )
        for ( int c{}; c < n; ++c )
            if ( r == c ) upper += m[ r ][ c ], lower += m[ r ][ c ];
            else ( r < c ? upper : lower ) += m[ r ][ c ];
    return { upper, lower };
} // T: 0.06+
