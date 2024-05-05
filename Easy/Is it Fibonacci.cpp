long long solve( int n, int k, vector< long long > v ) {
    auto s{ accumulate( v.cbegin(), v.cend(), 0LL )};
    for ( int i{ k }; i < n; ++i )
        v.push_back( s ), s += v[ i ] - v[ i-k ];
    return v[ n-1 ];
}
