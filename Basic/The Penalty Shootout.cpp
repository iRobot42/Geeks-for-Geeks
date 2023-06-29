#define V1

#ifdef V1
int penaltyScore( string s ) {
    int x{};
    for ( size_t i{}; i < s.size(); ++i )
        if ( s[ i ] == '2' && s[ i+1 ] == '1' ) ++x;
    return x;
} // T: 0.01+

#elif defined( V2 )
int penaltyScore( string s ) {
    int x{};
    for ( const char& c : s )
        if ( c == '2' && *next( &c ) == '1' ) ++x;
    return x;
} // T: 0.02+

#elif defined( V3 )
int penaltyScore( string s ) {
    int x{};
    for ( auto i{ s.cbegin() }; i < s.cend(); ++i )
        if ( *i == '2' && *next( i ) == '1' ) ++x;
    return x;
} // T: 0.03+

#endif
