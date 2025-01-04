vector< int > mergeHeaps( vector< int >& a, vector< int >& b, int n, int m ) {
    a.insert( a.end(), b.cbegin(), b.cend() );
    sort( a.rbegin(), a.rend() );
    return a;
}
