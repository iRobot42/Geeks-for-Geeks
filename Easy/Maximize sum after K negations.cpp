long long maximizeSum( long long a[], int n, int k ) {
    sort( a, a + n );
    for ( int i{}; i < n && k; ++i, --k )
        if ( a[ i ] < 0 ) a[ i ] *= -1;
        else break;
    if ( k & 1 ) *min_element( a, a + n ) *= -1;
    return accumulate( a, a + n, 0LL );
}
