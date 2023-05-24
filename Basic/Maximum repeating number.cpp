int maxRepeating( int* a, int n, int k ) {
    vector< int > h( k );
    while ( n-- ) h[ a[ n ] ]++;
    return max_element( h.cbegin(), h.cend() ) - h.cbegin();
} // T: 0.34 - 0.38
