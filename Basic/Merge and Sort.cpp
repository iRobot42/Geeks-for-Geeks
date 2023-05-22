int mergeNsort( int a[], int b[], int n, int m, int answer[] ) {
    const int l( 1e5 );
    bool h[ l ]{};
    while ( n-- ) h[ a[ n ] ] = true;
    while ( m-- ) h[ b[ m ] ] = true;
    for ( n = 1; n < l; ++n )
        if ( h[ n ] ) answer[ ++m ] = n;
    return ++m;
} // T: 0.31 - 0.35
