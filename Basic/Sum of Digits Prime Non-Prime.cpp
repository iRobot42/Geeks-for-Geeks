#define V2

#ifdef V1
int digitPrime( int n ) {
    switch ( n % 9 ) { case 2: case 3: case 5: case 7: return 1; }
    return 0;
} // 0.01+

#elif defined( V2 )
int digitPrime( int n ) {
    return n %= 9, n == 2 || n == 3 || n == 5 || n == 7;
} // 0.01+

#elif defined( V3 )
int digitPrime( int n ) {
    while ( n > 9 ) {
        int t{ n }, s{};
        do s += t % 10;
        while ( t /= 10 );
        n = s;
    }
    return n == 2 || n == 3
        || n == 5 || n == 7;
} // 0.01+

#endif
