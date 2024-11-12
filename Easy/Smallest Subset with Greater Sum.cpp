int minSubset( vector< int >& v ) {
    sort( v.rbegin(), v.rend() );
    const int sum{ accumulate( v.cbegin(), v.cend(), 0 )};
    for ( size_t i{}, s{}; i < v.size(); ++i )
        if (( s += v[ i ] ) > sum - s ) return ++i;
    return v.size();
}
