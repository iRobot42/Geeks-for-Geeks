long long maxSum( int a[], int n ) {
    sort( a, a + n );
    long long s{}, i{ n-- / 2 };
    while ( i-- ) s += a[ n - i ] - a[ i ];
    return 2 * s;
} // T: 0.33 - 0.36
