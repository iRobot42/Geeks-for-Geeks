#define V2

#ifdef V1
int isFactorial( int n ) {
    const vector< int > f{ 1, 2, 6, 24, 120, 720, 5040, 40320 };
    return find( f.cbegin(), f.cend(), n ) != f.cend();
} // 0.02+

#elif defined( V2 )
int isFactorial( int n ) {
    int a{ 2 };
    while (!( n % a )) n /= a++;
    return n == 1;
} // 0.02+

#endif
