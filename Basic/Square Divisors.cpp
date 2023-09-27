int squareFactor( long long n ) {
    int c{};
    for ( int i{ 1 }, r{ sqrt( n )}; i <= r; ++i )
        if (!( n % ( i * i ))) ++c;
    return c;
} // 0.01+
