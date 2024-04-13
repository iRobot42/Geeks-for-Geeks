bool isFit( int a[], int b[], int n ) {
    sort( a, a + n ), sort( b, b + n );
    while ( n-- ) if ( b[ n ] < a[ n ] ) return false;
    return true;
}
