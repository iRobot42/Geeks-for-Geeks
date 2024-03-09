#define VERSION 2

#if VERSION == 1
bool arraySortedOrNot( int a[], int n ) {
    return is_sorted( a, a + n );
}

#elif VERSION == 2
bool arraySortedOrNot( int a[], int n ) {
    while ( --n ) if ( a[ n ] < a[ n-1 ] ) return false;
    return true;
}

#endif
