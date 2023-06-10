int KthDistinct( vector< int >nums, int k ) {
    array< int, size_t( 1e6 ) + 1 > h{};
    for ( const int i : nums ) ++h[ i ];
    for ( const int i : nums )
        if ( h[ i ] == 1 && !--k ) return i;
    return -1;
} // T: 0.03+
