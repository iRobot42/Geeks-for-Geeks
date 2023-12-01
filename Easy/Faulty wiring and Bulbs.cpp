int countFlips( int a[], int n ) {
    int c{};
    for ( int i{}; i < n; ++i )
        c += !( a[ i ] + c & 1 );
    return c;
}
