#define V3

#if defined( V1 )
pair< int, int > get( int a, int b ) {
    return { b, a };
} // T: 0.01

#elif defined( V2 )
pair< int, int > get( int a, int b ) {
    return { a ^ b ^ a, b ^ a ^ b };
} // T: 0.01

#elif defined( V3 )
pair< int, int > get( int a, int b ) {
    a ^= b ^= a ^= b;
    return { a, b };
} // T: 0.01
#endif
