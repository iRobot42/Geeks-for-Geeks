#define V2

#ifdef V1
int nthCarol( int n ) {
    return vector< int >{ -1, 7, 47, 223, 959, 3967,
        16127, 65023, 261119, 1046527, 4190207, 16769023,
        67092479, 268402687, 1073676287 }[ --n ];
} // 0.01+

#elif defined( V2 )
int nthCarol( int n ) {
    return pow( 4, n ) - pow( 2, n + 1 ) - 1;
} // 0.01+

#endif
