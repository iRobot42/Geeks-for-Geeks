void convertToWave( int n, vector< int >& a ) {
    for ( size_t i{ 1 }; i < n; i += 2 )
        swap( a[ i ], a[ i-1 ] );
}
