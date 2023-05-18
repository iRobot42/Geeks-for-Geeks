void Addition( vector< vector< int > >& a,
               vector< vector< int > >& b ) {
    for ( int r{}; r < a.size(); ++r )
        for ( int c{}; c < a.size(); ++c )
            a[ r ][ c ] += b[ r ][ c ];
} // T: 0.03
