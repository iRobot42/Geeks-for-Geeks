vector< int > firstAndLast( vector< int >& a, int n, int x ) {
    auto r{ upper_bound( a.cbegin(), a.cend(), x ) };
    if ( *--r != x ) return { -1 };
    auto l{ lower_bound( a.cbegin(), r, x ) };
    if ( l > r ) return { -1 };
    return { l - a.cbegin(), r - a.cbegin() };
} // T: 0.34+
