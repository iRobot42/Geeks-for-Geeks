#define V2

#ifdef V1
long long findMissing( long long a[], long long b[], int n ) {
    long long r{ a[ --n ] };
    while ( n-- ) r ^= a[ n ] ^ b[ n ];
    return r;
} // T: 0.31 - 0.35

#elif defined( V2 )
long long findMissing( long long a[], long long b[], int n ) {
    return accumulate( a, a + n, 0ll ) - accumulate( b, b + --n, 0ll );
} // T: 0.32 - 0.36

#endif
