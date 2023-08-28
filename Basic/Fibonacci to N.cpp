vector< int > nFibonacci( int n ) {
    vector< int > v{ 0, 1, 1 };
    for ( size_t i{ 1 }; v.back() <= n; ++i )
        v.push_back( v[ i ] + v[ i+1 ] );
    return v.pop_back(), v;
} // 0.19+
