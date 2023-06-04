vector< int > acceptedProposals( vector< int >& arr, int n ) {
    int a( 1e6 ), b( 1e6 ), y{ 1 }, z{ 1 };
    for ( const int i : arr ) {
        if ( i > z ) y = z, z = i; else if ( i > y ) y = i;
        if ( i < a ) b = a, a = i; else if ( i < b ) b = i;
    }
    return { y, b };
} // T: 0.1+
