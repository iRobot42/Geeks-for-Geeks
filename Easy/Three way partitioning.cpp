void threeWayPartition( vector< int >& v, int a, int b ) {
    size_t l{}, r{ v.size() };
    for ( size_t i{}; i < r; ++i )
        if ( v[ i ] < a ) swap( v[ i ], v[ l++ ] );
        else if ( v[ i ] > b ) swap( v[ i-- ], v[ --r ] );
}
