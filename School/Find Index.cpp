vector< int > findIndex( int a[], int n, int key ) {
    while ( n-- ) if ( a[ n ] == key ) break;
    return { n < 0 ? n : find( a, a + n, key ) - a, n };
} // T: 0.09 - 0.11
