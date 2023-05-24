void immediateSmaller( vector< int >& a, int n ) {
    n--;
    for ( int i{}; i < n; ++i )
        a[ i ] = a[ i + 1 ] < a[ i ] ? a[ i + 1 ] : -1;
    a[ n ] = -1;
} // T: 0.39 - 0.45
