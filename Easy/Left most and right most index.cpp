pair< long, long > indexes( vector< long long > v, long long x ) {
    if ( !binary_search( v.cbegin(), v.cend(), x )) return { -1, -1 };
    return { lower_bound( v.cbegin(), v.cend(), x ) - v.cbegin(),
             upper_bound( v.cbegin(), v.cend(), x ) - v.cbegin() - 1 };
}
