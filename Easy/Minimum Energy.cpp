int minEnergy( int a[], int n ) {
    int m{};
    for ( int i{}, s{}; i < n; ++i )
        m = min( m, s += a[ i ] );
    return m < 0 ? abs( --m ) : 1;
}
