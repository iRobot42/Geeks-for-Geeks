#define V2

#ifdef V1
bool isPowerofTwo( long long n ) {
    return __builtin_popcountll( n ) == 1;
} // 0.16+

#elif defined( V2 )
bool isPowerofTwo( long long n ) {
    return bitset< 64 >( n ).count() == 1;
} // 0.16+

#elif defined( V3 )
bool isPowerofTwo( long long n ) {
    return !( n & n-1 ) && n;
} // 0.16+

#endif
