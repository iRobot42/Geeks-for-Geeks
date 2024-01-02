int numofsubset( int a[], int n ) {
    sort( a, a + n );
    int c{ 1 };
    while ( --n ) if ( a[ n ] - a[ n-1 ] > 1 ) ++c;
    return c;
}
