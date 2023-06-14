typedef vector< vector< int >> Matrix;
Matrix rotateMatrix( int n, int m, int k, Matrix M ) {
    for ( auto& i : M )
        rotate( i.begin(), i.begin() + k % m, i.end() );
    return M;
} // T: 0.42+
