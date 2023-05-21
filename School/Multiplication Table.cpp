vector< int > getTable( int n ) {
    vector< int > v( 10, n );
    return partial_sum( v.cbegin(), v.cend(), v.begin() ), v;
} // T: 0.01
