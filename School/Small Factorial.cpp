#define V2
#if defined( V1 )
long long find_fact( int n ) {
    long long f{ 1 };
    while ( n ) f *= n--;
    return f;
} // T: 0.01
#elif defined( V2 )
long long find_fact( int n ) {
    return n ? find_fact( n - 1 ) * n : 1;
} // T: 0.01
#endif
