bool canSplit( vector< int >& a ) {
    int sum{ accumulate( a.cbegin(), a.cend(), 0 )};
    if ( sum & 1 ) return false;
    else sum /= 2;
    for ( size_t i{}; sum > 0; ++i )
        if (!( sum -= a[ i ] )) return true;
    return false;
}
