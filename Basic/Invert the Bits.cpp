#define V3
#ifdef V1
long long invertBits( long long n ) {
    return n ^ 0xFFFFFFFF;
} // 0.01+
#elif defined( V2 )
long long invertBits( long long n ) {
    return ~unsigned( n );
} // 0.01+
#elif defined( V3 )
long long invertBits( long long n ) {
    return bitset< 32 >( n ).flip().to_ulong();
} // 0.01+
#endif
