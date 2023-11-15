int max_val( int a[], int n ) {
    int l{}, r{ n-1 }, m{ INT_MIN };
    while ( l < r )
        m = max( m, abs( l - r ) * min( a[ l ], a[ r ] )),
        a[ l ] < a[ r ] ? ++l : --r;
    return m;
}
