pair< int, int > Max_Sum( int a[], int n, int k ) {
    sort( a, a + n );
    int l{}, r{ --n }, s, L{}, R{}, S{};
    while ( l < r )
        s = a[ l ] + a[ r ], s >= k ? --r :
        s > S ? S = s, L = a[ l++ ], R = a[ r ] : ++l;
    return make_pair( L, R );
}
