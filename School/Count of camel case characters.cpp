#define V2
#if defined( V1 )
int countCamelCase ( string s ) {
    int x{};
    for ( const char c : s )
        if ( isupper( c ) ) x++;
    return x;
} // T: 0.20 - 0.21
#elif defined( V2 )
int countCamelCase ( string s ) {
    return count_if( s.cbegin(), s.cend(), ::isupper );
} // T: 0.20 - 0.22
#endif
