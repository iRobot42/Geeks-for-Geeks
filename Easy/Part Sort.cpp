void partSort( vector< int >& a, int n, int l, int r ) {
    if ( l > r ) swap( l, r );
    sort( a.begin() + l, a.begin() + ++r );
}
