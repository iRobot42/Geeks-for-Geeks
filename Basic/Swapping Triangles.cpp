typedef vector< vector< int >> Matrix;
Matrix swapTriangle( int n, Matrix a ) {
    for ( size_t r{}; r < n; ++r )
        for ( size_t c{ r + 1 }; c < n; ++c )
            swap( a[ r ][ c ], a[ c ][ r ] );
    return a;
} // T: 0.54+
