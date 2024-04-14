int KthMissingElement( int a[], int n, int k ) {
    int l{}, r{ n-1 }, m;
    while ( l <= r )
        a[ m = l + r >> 1 ] - *a - k < m ? l = ++m : r = --m;
    return ( m = *a + r + k ) > a[ n-1 ] ? -1 : m;
}
