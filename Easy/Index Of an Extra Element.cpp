int findExtra( int a[], int b[], int n ) {
    int l{}, m;
    while ( l < n ) m = l + n >> 1,
        a[ m ] == b[ m ] ? l = ++m : n = m;
    return l;
}
