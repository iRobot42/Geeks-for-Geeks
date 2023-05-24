#define V3

#ifdef V1
void rotate( int a[], int n ) {
    std::rotate( a, a + n - 1, a + n );
} // T: 0.01

#elif defined( V2 )
void rotate( int a[], int n ) {
    while ( --n ) swap( a[ n ], a[ n - 1 ] );
} // T: 0.01

#elif defined( V3 )
void rotate( int a[], int n ) {
    int t{ a[ n - 1 ] };
    while ( --n ) a[ n ] = a[ n - 1 ];
    *a = t;
} // T: 0.01

#endif
