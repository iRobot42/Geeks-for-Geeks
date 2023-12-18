long long findMinValue( long long a[], long long n ) {
    double s{};
    for ( int i{}; i < n; ++i )
        s += log10( a[ i ] ) + 1e-15;
    return ceil( pow( 10, s / n ));
}
