#define V1

#ifdef V1
int transitionPoint( int a[], int n ) {
    const int i{ lower_bound( a, a + n, 1 ) - a };
    return i == n ? -1 : i;
} // 0.08+

#elif defined( V2 )
int transitionPoint( int a[], int n ) {
    int l{}, r{ n }, m;
    while ( l < r )
        a[ m = l + r >> 1 ] ? r = m : l = ++m;
    return m == n ? -1 : m;
} // 0.08+

#endif
