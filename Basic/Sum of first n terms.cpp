#define V2

#ifdef V1
long long sumOfSeries( long long n ) {
    return powl( n * ( n + 1 ) / 2, 2 );
} // 0.01+

#elif defined( V2 )
long long sumOfSeries( long long n ) {
    return pow( n * ( n + 1.L ) / 2, 2 );
} // 0.01+

#endif
