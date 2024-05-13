int findX( int a[], int n, int q ) {
    int x{ *a }, f{ INT_MAX };
    for ( int i{}, c; i < n; ++i )
        if (( c = __builtin_popcount( q ^ a[ i ] )) < f
           || c == f && a[ i ] < x ) x = a[ i ], f = c;
    return x;
}
