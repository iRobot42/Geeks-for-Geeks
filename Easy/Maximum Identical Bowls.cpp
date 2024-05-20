int getMaximum( int n, vector< int >& a ) {
    const long s{ accumulate( a.cbegin(), a.cend(), 0L ) };
    while ( s % n ) --n;
    return n;
}
