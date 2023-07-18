#define V3
#ifdef V1
int orGate( vector< int > a, int n ) {
    return find( a.cbegin(), a.cend(), 1 ) != a.cend();
} // 0.02+
#elif defined( V2 )
int orGate( vector< int > a, int n ) {
    for ( int i : a ) if ( i ) return 1;
    return 0;
} // 0.02+
#elif defined( V3 )
int orGate( vector< int > a, int n ) {
    while ( n-- ) if ( a[ n ] ) return 1;
    return 0;
} // 0.02+
#endif
