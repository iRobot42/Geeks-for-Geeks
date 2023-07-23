#define V2
#ifdef V1
int getCount( int x ) {
    const bitset< 32 > b( x++ );
    return x - pow( 2, b.count() );
} // 0.01+
#elif defined( V2 )
int getCount( int x ) {
    int c{ 1 }, t{ x++ };
    do c <<= 1;
    while ( t &= t-- );
    return x - c;
} // 0.01+
#endif
