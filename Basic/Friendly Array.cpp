int sumOfMinAbsDifferences( int a[], int n ) {
    sort( a, a + n );
    int s{ a[ 1 ] - a[ 0 ] + a[ --n ] - a[ n - 1 ] };
    while ( --n )
        s += min( a[ n ] - a[ n - 1 ], a[ n + 1 ] - a[ n ] );
    return s;
} // T: 0.77 - 0.83
