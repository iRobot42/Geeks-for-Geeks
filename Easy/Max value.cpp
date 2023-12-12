int maxVal( int a[], int n ) {
    for ( int i{}; i < n; ++i ) a[ i ] -= i;
    const auto m{ minmax_element( a, a + n )};
    return *m.second - *m.first;
}
