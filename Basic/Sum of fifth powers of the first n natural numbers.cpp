#define V2

#ifdef V1
long long sumOfFifthPowers( long long n ) {
    const long long n2{ n * n };
    return n2 * ( n2 * ( 2 * n2 + 6 * n + 5 ) - 1 ) / 12;
} // 0.01+

#elif defined( V2 )
long long sumOfFifthPowers( long long n ) {
    const long long n2{ n*n }, n4{ n2*n2 }, n5{ n*n4 }, n6{ n*n5 };
    return ( 2*n6 + 6*n5 + 5*n4 - n2 ) / 12;
} // 0.01+

#endif
