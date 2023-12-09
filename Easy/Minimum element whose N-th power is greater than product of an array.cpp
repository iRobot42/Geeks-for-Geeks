int findMin( int a[], int n ) {
    double s{};
    for ( int i{}; i < n; ++i )
        s += log( a[ i ] );
    return 1 + exp( s / n );
}
