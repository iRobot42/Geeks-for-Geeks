#define V2

#ifdef V1
void rotateArr( int a[], int d, int n ) {
    rotate( a, a + d % n, a + n );
}

#elif defined( V2 )
void rotateArr( int a[], int d, int n ) {
    auto p{ a + d % n }, b{ a + n };
    reverse( a, p ), reverse( p, b );
    reverse( a, b );
}

#endif
