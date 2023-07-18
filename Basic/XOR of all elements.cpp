vector< int > getXor( vector< int > a, int n ) {
    n = 0;
    for ( int i : a ) n ^= i;
    for ( int& i : a ) i ^= n;
    return a;
} // 0.29+
