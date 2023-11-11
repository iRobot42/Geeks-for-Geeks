void transpose( vector< vector< int >>& m, int n ) {
    for ( size_t r{}; r < n; ++r )
        for ( size_t c{}; c < r; ++c )
            swap( m[ r ][ c ], m[ c ][ r ] );
}
