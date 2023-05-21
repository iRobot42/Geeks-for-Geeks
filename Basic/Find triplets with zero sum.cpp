bool findTriplets( int a[], int n ) {
    sort( a, a + n );
    for ( int i{}; i < n - 2; ++i ) {
        int j{ i + 1 }, k{ n - 1 };
        while ( j < k ) {
            int sum{ a[ i ] + a[ j ] + a[ k ] };
            if ( !sum ) return true;
            sum < 0 ? j++ : k--;
        }
    }
    return false;
} // T: 0.15 - 0.17
