int findExtra( int a[], int b[], int n ) {
    int l{}, r{ --n };
    while ( l < r ) n = l + r >> 1,
        a[ n ] == b[ n ] ? l = ++n : r = n;
    return l;
}
