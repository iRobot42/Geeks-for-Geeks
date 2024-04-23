int maxPartitions( int a[], int n ) {
    int c{};
    for( int i{}, m{}; i < n; ++i )
        c += i == ( m = max( m, a[ i ] ));
    return c;
}
