vector< int > valueEqualToIndex( int a[], int n ) {
    vector< int > v;
    for ( int i{}; i < n; ++i )
        if ( a[ i ] == i + 1 )
            v.push_back( i + 1 );
    return v;
} // T: 0.31 - 0.34
