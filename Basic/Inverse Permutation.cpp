vector< int > inversePermutation( int a[], int n ) {
    vector< int > v( n );
    while ( n-- ) v[ --a[ n ] ] = n + 1;
    return v;
} // T: 0.37+
