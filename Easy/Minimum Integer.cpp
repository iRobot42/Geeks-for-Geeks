int minimumInteger( int n, vector< int >& a ) {
    int x{ INT_MAX };
    const auto s{ accumulate( a.cbegin(), a.cend(), 0L ) };
    for ( const int i : a )
        if ( i < x && s <= 1L * n * i ) x = i;
    return x;
}
