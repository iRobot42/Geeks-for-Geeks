#define V2

#ifdef V1
int ReducingWalls( int a[], int n, int k ) {
    return accumulate( a, a + n, 0,
        [ k ]( int c, int i ){ return c + --i / k; } );
} // T: 0.01+

#elif defined( V2 )
int ReducingWalls( int a[], int n, int k ) {
    int c{};
    while ( n-- ) c += --a[ n ] / k;
    return c;
} // T: 0.01+

#endif
