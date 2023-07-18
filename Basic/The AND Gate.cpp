#define V3
#ifdef V1
int andGate( vector< int > a, int n ) {
    return find( a.cbegin(), a.cend(), 0 ) == a.cend();
} // 0.02+
#elif defined( V2 )
int andGate( vector< int > a, int n ) {
    for ( int i : a ) if ( !i ) return 0;
    return 1;
} // 0.02+
#elif defined( V3 )
int andGate( vector< int > a, int n ) {
    while ( n-- ) if ( !a[ n ] ) return 0;
    return 1;
} // 0.02+
#endif
