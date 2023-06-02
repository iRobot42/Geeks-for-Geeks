long long solve( int n, long long a[], long long b ) {
    for ( int i{}; i < n; ++i )
        if ( b == a[ i ] ) b *= 2;
    return b;
} // T: 0.01+
