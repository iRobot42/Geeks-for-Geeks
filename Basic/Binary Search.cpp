int binarysearch( int a[], int n, int k ) {
    const int i{ find( a, a + n, k ) - a };
    return i != n ? i : -1;
} // T: 0.24 - 0.28

// int binarysearch( int a[], int n, int k ) {
//     for ( int l{}, m; l < n; a[ m ] > k ? n = m : l = ++m )
//         if ( a[ m = l + n >> 1 ] == k ) return m;
//     return -1;
// } // T: 0.24 - 0.28
