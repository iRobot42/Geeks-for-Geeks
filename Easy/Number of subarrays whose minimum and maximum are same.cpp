long long numberOfways( int a[], int n ) {
    long long x{};
    for ( int i{ 1 }, c{ 1 }; i < n; ++i )
        if ( a[ i ] == a[ i-1 ] ) x += ++c;
        else ++x, c = 1;
    return ++x;
}
