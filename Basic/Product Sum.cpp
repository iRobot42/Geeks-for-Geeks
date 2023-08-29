#define V1

#ifdef V1
long long countDigits( long long a, long long b ) {
    return log10( abs( a * b )) + 1;
} // 0.01+

#elif defined( V2 )
long long countDigits( long long a, long long b ) {
    a = abs( a * b ), b = 0;
    while ( a ) ++b, a /= 10;
    return b;
} // 0.01+

#endif
