typedef vector< vector< int >> Matrix;
void Mutliply( Matrix& a, Matrix& b ) {
    const size_t n{ a.size() };
    Matrix c( n, vector< int >( n ) );
    for ( size_t i{}; i < n; ++i )
        for ( size_t j{}; j < n; ++j )
            for ( size_t k{}; k < n; ++k )
                c[ i ][ j ] += a[ i ][ k ] * b[ k ][ j ];
    a = c;
} // T: 0.04+
