typedef vector< vector< int >> Matrix;
Matrix sortedMatrix( int n, Matrix M ) {
    vector< int > v;
    v.reserve( n * n );
    for ( const auto& r : M )
        for ( const int c : r )
            v.push_back( c );
    sort( v.begin(), v.end() );
    for ( size_t r{}, i{}; r < n; ++r )
        for ( size_t c{}; c < n; ++c )
            M[ r ][ c ] = v[ i++ ];
    return M;
} // T: 1.02+
