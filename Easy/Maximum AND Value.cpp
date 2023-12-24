int maxAND( int a[], int n ) {
    int r{}, s{ sizeof( int ) * 8 };
    while ( s-- ) {
        const int t{ 1 << s | r };
        if ( count_if( a, a + n, [ & ]( int i ) {
            return ( i & t ) == t; }) > 1 ) r = t;
    }
    return r;
}
