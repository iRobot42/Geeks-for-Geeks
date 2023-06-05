int doUnion( int a[], int n, int b[], int m ) {
    unordered_set< int > h( a, a + n );
    return h.insert( b, b + m ), h.size();
} // T: 0.75+
