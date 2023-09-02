#define V2

#ifdef V1
long long factorial( int n ) {
    long long f{ 1 };
    while ( n ) f *= n--;
    return f;
} // 0.01+

#elif defined( V2 )
long long factorial( int n ) {
    return vector< long long >{ 1, 1, 2, 6, 24, 120, 720,
        5040, 40320, 362880, 3628800, 39916800, 479001600,
        6227020800, 87178291200, 1307674368000, 20922789888000,
        355687428096000, 6402373705728000 }[ n ];
} // 0.01+

#endif
