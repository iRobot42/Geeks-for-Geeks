int printEqualModNumbers( int a[], int n ) {
    if ( n == 1 ) return -1;
    int k{ *max_element( a, a + n )}, c{};
    do { int t{ *a % k }, f{ 1 };
        for ( int i{}; f && i < n; ++i )
            if ( a[ i ] % k != t ) f = 0;
        if ( f ) ++c;
    } while ( --k );
    return c;
}
