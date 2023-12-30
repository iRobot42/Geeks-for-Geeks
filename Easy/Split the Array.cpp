int countgroup( int a[], int n ) {
    int x{}, r{ 1 };
    for ( int i{}; i < n; ++i ) x ^= a[ i ];
    if ( x ) return 0;
    while ( --n ) r = r * 2 % 1'000'000'007;
    return --r;
}
