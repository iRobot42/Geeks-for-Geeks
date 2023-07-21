#define V2
#ifdef V1
int factorOrMultiple( int n, int x, int a[] ) {
    int c{};
    while ( n-- ) if ( !( a[ n ] % x )) c |= a[ n ];
    return c;
} // 0.40+
#elif defined( V2 )
int factorOrMultiple( int n, int x, int a[] ) {
    return accumulate( a, a + n, 0,
        [ x ]( int r, int i ){ return i%x ? r : r|i; });
} // 0.40+
#endif
