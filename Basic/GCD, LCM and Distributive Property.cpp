#define V1

#ifdef V1
long long findValue( int x, int y, int z ) {
    const long long a{ x }, b{ __gcd( y, z )};
    return a * b / __gcd( a, b );
} // 0.01+

#elif defined( V2 )
long long findValue( int x, int y, int z ) {
    return __gcd( 1LL * x * y / __gcd( x, y ),
                  1LL * x * z / __gcd( x, z ));
} // 0.01+

#endif
