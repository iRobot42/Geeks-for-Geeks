int NumberofElementsInIntersection( int a[], int b[], int n, int m ) {
    int h[ 100001 ]{}, c{};
    while ( n-- ) h[ a[ n ]] = 1;
    while ( m-- ) if ( h[ b[ m ]] ) ++c, h[ b[ m ]] = 0;
    return c;
}
