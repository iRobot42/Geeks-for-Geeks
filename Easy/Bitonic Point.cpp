int findMaximum( int a[], int n ) {
    int l{}, r{ n-1 };
    while ( l < r ) {
        int m{ l + r >> 1 };
        if ( a[ m ] < a[ m+1 ] ) l = ++m;
        else r = m;
    }
    return a[ l ];
}
