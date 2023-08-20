#define V3

#ifdef V1
int checkDivisible36( string s ) {
    int f{ stoi( s.substr( s.size()-2 ))}, n{};
    for ( const char c : s ) n += c-'0';
    return !( f % 4 || n % 9 );
} // 0.01+

#elif defined( V2 )
int checkDivisible36( string s ) {
    return !( stoi( s.substr( s.size()-2 )) % 4
        || accumulate( s.cbegin(), s.cend(), 0,
        []( int a, char c ){ return a + c-'0'; }) % 9 );
} // 0.01+

#elif defined( V3 )
int checkDivisible36( string s ) {
    int t{};
    for ( const char c : s )
        t = ( 10 * t + c-'0' ) % 36;
    return !t;
} // 0.01+

#endif
