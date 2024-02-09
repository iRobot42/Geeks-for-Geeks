void kTop( node a[], int n ) {
    stable_sort( a, a + n, []( const node& n1, const node& n2 ) {
        return n1.marks > n2.marks; });
}
