int columnWithMaxZeros( vector< vector< int >> a, int n ) {
    int C{ -1 }, Z{};
    for ( size_t c{}, z{}; c < n; ++c, z = 0 ) {
        for ( size_t r{}; r < n; ++r )
            if ( !a[ r ][ c ] ) ++z;
        if ( z > Z ) Z = z, C = c;
    }
    return C;
}
