void sortBySetBitCount( int a[], int n ) {
#   define BITS( x ) __builtin_popcount( x )
    stable_sort( a, a + n, []( int i, int j ){
        return BITS( i ) > BITS( j ); });
}
