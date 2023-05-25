long long printMinimumProduct( int a[], int n ) {
    int m1{ *a }, m2( 1e5 );
    while ( --n )
        if ( a[ n ] < m1 ) m2 = m1, m1 = a[ n ];
        else if ( a[ n ] < m2 ) m2 = a[ n ];
    return 1ll * m1 * m2;
} // T: 0.05+
