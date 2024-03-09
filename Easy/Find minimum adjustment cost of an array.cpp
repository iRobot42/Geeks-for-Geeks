int minAdjustmentCost( int a[], int n, int t ) {
    constexpr int m{ 100 };
    vector< vector< int >> v( n, vector< int >( m+1, INT_MAX ));
    for ( int i{}; i <= m; ++i ) v[ 0 ][ i ] = abs( i - *a );
    for ( int r{ 1 }; r < n; ++r )
        for ( int c{}; c <= m; ++c ) {
            const int l{ min( m, c + t )};
            for ( int i{ max( 0, c - t )}; i <= l; ++i ) {
                const int cost{ v[ r-1 ][ i ] + abs( a[ r ] - c )};
                v[ r ][ c ] = min( v[ r ][ c ], cost);
            }
        }
    return *min_element( v.back().cbegin(), v.back().cend() );
}
