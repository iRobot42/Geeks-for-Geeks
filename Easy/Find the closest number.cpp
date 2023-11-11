int findClosest( int a[], int n, int t ) {
    int i{};
    while ( i < n && a[ i ] < t ) ++i;
    return !i ? *a : i == n ? a[ --n ] :
        t - a[ i-1 ] < a[ i ] - t ? a[ --i ] : a[ i ];
}
