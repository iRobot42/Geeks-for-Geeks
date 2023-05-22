int findClosest( int a[], int n, int t ) {
    int i{};
    while ( i < n && a[ i ] < t ) i++;
    return !i ? *a : i == n ? a[ n - 1 ] :
        t - a[ i - 1 ] < a[ i ] - t ?
        a[ --i ] : a[ i ];
} // T: 0.19 - 0.21
