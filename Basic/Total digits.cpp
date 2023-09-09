#define V1

#ifdef V1
long long totalDigits( long long n ) {
    long long total{};
    for ( long long i{ 1 }; i <= n; i *= 10 )
        total += n - i + 1;
    return total;
} // 0.01+

#elif defined( V2 )
long long totalDigits( long long n ) {
    long long total{};
    do total += log10( n ) + 1;
    while ( --n );
    return total;
} // 0.32+

#endif
