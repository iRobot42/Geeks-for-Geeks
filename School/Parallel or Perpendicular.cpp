int find( vector< int > A, vector< int > B ) {
    return !( A[0] * B[0] + A[1] * B[1] + A[2] * B[2] ) ? 2
         : !( pow( A[1] * B[2] - A[2] * B[1], 2 )
            + pow( A[0] * B[2] - A[2] * B[0], 2 )
            + pow( A[0] * B[1] - A[1] * B[0], 2 ) );
} // T: 0.01
