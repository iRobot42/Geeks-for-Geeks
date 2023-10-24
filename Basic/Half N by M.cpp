#define V2

#ifdef V1
int mthHalf( int n, int m ) {
    return n / pow( 2, --m );
} // 0.01+

#elif defined( V2 )
int mthHalf( int n, int m ) {
    while ( --m && n ) n /= 2;
    return n;
} // 0.01+

#endif
