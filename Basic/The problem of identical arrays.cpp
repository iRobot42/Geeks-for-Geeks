int check( int* a, int* b, int n ) {
    sort( a, a + n ), sort( b, b + n );
    while ( n-- ) if ( a[ n ] != b[ n ] ) return 0;
    return 1;
} // T: 0.72 - 0.77
