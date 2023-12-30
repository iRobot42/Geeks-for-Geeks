int countPairs( int a[], int n, int k ) {
    sort( a, a + n );
    int c{};
    for ( int l{}, r{ 1 }; r < n; ++r ) {
        while ( a[ r ] - a[ l ] >= k ) ++l;
        c += r - l;
    }
    return c;
}
