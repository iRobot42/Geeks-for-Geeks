#define V2

#if defined( V1 )
int thirdLargest( int a[], int n ) { // O( n log n )
    return sort( a, a + n ), a[ n - 3 ];
} // T: 0.02

#elif defined( V2 )
int thirdLargest( int a[], int n ) { // O( n )
    int l1{ *a }, l2{}, l3{};
    while ( --n )
        if      ( a[ n ] > l1 ) { l3 = l2; l2 = l1; l1 = a[ n ]; }
        else if ( a[ n ] > l2 ) { l3 = l2; l2 = a[ n ]; }
        else if ( a[ n ] > l3 ) { l3 = a[ n ]; }
    return l3;
} // T: 0.01 - 0.02

#endif
