#define V2

#ifdef V1
int totalCount( int a[], int n, int k ) {
    int c{};
    while ( n-- ) c += a[ n ] / k + ( a[ n ] % k > 0 );
    return c;
} // T: 0.39+

#elif defined( V2 )
int totalCount( int a[], int n, int k ) {
    return accumulate( a, a + n, 0,
        [ k ]( int c, int i ){ return c + i / k + ( i % k > 0 ); } );
} // T: 0.39+

#endif
