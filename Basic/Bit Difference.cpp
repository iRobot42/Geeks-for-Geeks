#define V2

#ifdef V1
int countBitsFlip( int a, int b ) {
    a ^= b, b = 0;
    do b += a & 1;
    while ( a >>= 1 );
    return b;
} // 0.19+

#elif defined( V2 )
int countBitsFlip( int a, int b ) {
    return __builtin_popcount( a ^ b );
} // 0.19+

#endif
