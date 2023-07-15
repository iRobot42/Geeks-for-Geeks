#define V2

#ifdef V1
void toBinary( int n ) {
    int r{}, i{};
    do r += n % 2 * pow( 10, i++ );
    while ( n /= 2 );
    cout << r;
} // 0.01+

#elif defined( V2 )
void toBinary( int n ) {
    if ( n > 1 ) toBinary( n / 2 );
    cout << n % 2;
} // 0.01+

#endif
