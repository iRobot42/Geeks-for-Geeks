int maxSortedAdjacentDiff( int* a, int n ) {
    int m{ *max_element( a, a + n )}, b[ ++m ]{}, r{};
    while ( n-- ) ++b[ a[ n ]];
    while ( m-- ) if ( b[ m ] ) a[ ++n ] = m;
    while ( n ) r = max( r, a[ n-1 ] - a[ n-- ] );
    return r;
}
