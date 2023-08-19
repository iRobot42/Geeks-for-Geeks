#define V2

#ifdef V1
int isPowerOfAnother( long long x, long long y ) {
    if ( x == 1 ) return y == 1;
    while (!( y % x )) y /= x;
    return y == 1;
} // 0.01+

#elif defined( V2 )
int isPowerOfAnother( long long x, long long y ) {
    const double d{ log( y ) / log( x ) };
    return d == floor( d ) && x != 1;
} // 0.01+

#endif
