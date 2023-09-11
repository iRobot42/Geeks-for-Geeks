vector< long long > printSeries( int n ) {
    vector< long long > v{ 1, 2, 5 };
    v.resize( n );
    for ( size_t i{ 3 }; i < n; ++i )
        v[ i ] = v[ i-1 ] + v[ i-2 ] + v[ i-3 ];
    return v;
} // 0.01+
