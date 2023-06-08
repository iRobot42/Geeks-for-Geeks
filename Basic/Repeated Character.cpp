#define V3

#ifdef V1 // two passes
char firstRep( string s ) {
    int h[ 26 ]{};
    for ( const char c : s ) ++h[ c - 'a' ];
    for ( const char c : s )
        if ( h[ c - 'a' ] > 1 ) return c;
    return '#';
} // T: 0.03+

#elif defined( V2 ) // std::count
char firstRep( string s ) {
    for ( const char c : s )
        if ( count( s.cbegin(), s.cend(), c ) > 1 )
            return c;
    return '#';
} // T: 0.03+

#elif defined( V3 ) // one pass
char firstRep( string s ) {
    bool h[ 26 ]{};
    char c{ '#' };
    for ( auto i{ s.crbegin() }; i != s.crend(); ++i )
        h[ *i - 'a' ] ? c = *i : ++h[ *i - 'a' ];
    return c;
} // T: 0.05+

#endif
