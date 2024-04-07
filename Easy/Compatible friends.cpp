int findDifference( int a1[], int a2[], int n ) {
    int c{};
    for ( int i{}, j{}; i < n; j = ++i )
        while ( a1[ i ] != a2[ i ] )
            swap( a1[ i ], a1[ ++j ] ), ++c;
    return c;
}
