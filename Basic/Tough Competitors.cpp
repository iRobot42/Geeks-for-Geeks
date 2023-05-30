int toughCompetitor( int* a, int n ) {
    sort( a, a + n );
    int d{ INT_MAX };
    while ( --n ) d = min( d, a[ n ] - a[ n - 1 ] );
    return d;
} // T: 0.32+
