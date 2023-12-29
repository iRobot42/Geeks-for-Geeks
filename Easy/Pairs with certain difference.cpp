int maxSumPairWithDifferenceLessThanK( int a[], int n, int k ) {
    sort( a, a + n );
    int s{};
    while ( --n > 0 )
        if ( a[ n ] - a[ n-1 ] < k )
            s += a[ n ] + a[ --n ];
    return s;
}
