int max_Books( int a[], int n, int k ) {
    int r{};
    for ( int i{}, s{}; i < n; ++i )
        if ( a[ i ] > k ) s = 0;
        else r = max( r, s += a[ i ] );
    return r;
}
