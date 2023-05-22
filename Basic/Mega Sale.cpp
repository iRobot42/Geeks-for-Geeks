long long maxProfit( int a[], int n, int m ) {
    sort( a, a + n );
    m = min( n, m );
    long long p{};
    while ( m-- ) if ( a[ m ] < 0 ) p -= a[ m ];
    return p;
} // T: 0.33 - 0.36
