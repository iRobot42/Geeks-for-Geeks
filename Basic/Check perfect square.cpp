#define V3

#ifdef V1 // plus and minus only
int checkPerfectSquare( int n ) {
    int i{ 1 };
    while (( n -= i ) > 0 ) i += 2;
    return !n;
} // 0.01+

#elif defined( V2 ) // fractional part trick
int checkPerfectSquare( int n ) {
    const auto t{ sqrt( n )};
    return t == floor( t );
} // 0.01+

#elif defined( V3 ) // pure math
int checkPerfectSquare( int n ) {
    return pow( floor( sqrt( n )), 2 ) == n;
} // 0.01+

#endif
