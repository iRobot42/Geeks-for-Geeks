#define V2

#ifdef V1
int findValue( int x, int y, int p ) {
    if ( p & 1 ) x *= 2;
    return max( x, y ) / min( x, y );
} // 0.22+

#elif defined( V2 )
int findValue( int x, int y, int p ) {
    if ( p & 1 ) x *= 2;
    return max( x / y, y / x );
} // 0.22+

#endif
