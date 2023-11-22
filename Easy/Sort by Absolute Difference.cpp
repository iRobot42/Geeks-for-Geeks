void sortABS( int a[], int n, int k ) {
    stable_sort( a, a + n, [=]( const int i, const int j ){
        return abs( i - k ) < abs( j - k ); });
}
