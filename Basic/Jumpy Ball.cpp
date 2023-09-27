#define V2

#ifdef V1
long long jumpyBall( long long n ) {
    long long d{};
    do d += n * 2;
    while ( n /= 2 );
    return d;
} // 0.01+

#elif defined( V2 )
long long jumpyBall( long long n ) {
    return n ? jumpyBall( n / 2 ) + n * 2 : 0;
} // 0.01+

#endif
