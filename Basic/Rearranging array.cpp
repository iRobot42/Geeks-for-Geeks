void Rearrange( int a[], int n, int answer[] ) {
    sort( a, a + n );
    for ( int i{}, j{ n }; i < n; ++i ) {
        answer[ i ] = a[ i / 2 ];
        answer[ ++i ] = a[ --j ];
    }
} // T: 0.36 - 0.40
