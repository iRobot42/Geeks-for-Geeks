vector< int > arranged( int a[], int n ) {
    vector< int > v( n );
    for ( int i{}, in{ -1 }, ip{ -2 }; i < n; ++i )
        v[ a[ i ] < 0 ? in += 2 : ip += 2 ] = a[ i ];
    return v;
} // T: 0.28 - 0.30
