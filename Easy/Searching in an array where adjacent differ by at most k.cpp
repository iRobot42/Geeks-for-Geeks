#define VERSION 2

#if VERSION == 1
int search( int a[], int n, int x, int k ) {
    return ( k = find( a, a + n, x ) - a ) == n ? -1 : k;
}

#elif VERSION == 2
int search( int a[], int n, int x, int k ) {
    int i{};
    do if ( a[ i ] == x ) return i;
    while (( i += max( 1, abs( a[ i ] - x ) / k )) < n );
    return -1;
}

#endif
