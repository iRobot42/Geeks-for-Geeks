#define V2

#ifdef V1
int minimumStep( int n ) {
    int c{};
    while ( n > 1 ) n % 3 ? --n : n /= 3, ++c;
    return c;
}

#elif defined( V2 )
int minimumStep( int n ) {
    return n > 1 ? minimumStep( n % 3 ? n-1 : n/3 ) + 1 : 0;
}

#endif
