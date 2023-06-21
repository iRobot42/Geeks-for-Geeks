#define V2

#ifdef V1 // SC: O(n)
string removeConsecutiveCharacter( string s ) {
    string r;
    for ( const char c : s )
        if ( c != r.back() ) r += c;
    return r;
} // T: 0.02+

#elif defined( V2 ) // SC: O(1)
string removeConsecutiveCharacter( string s ) {
    size_t i{};
    for ( size_t j{ 1 }; j < s.size(); ++j )
        if ( s[ i ] != s[ j ] )
            s[ ++i ] = move( s[ j ] );
    return s.substr( 0, ++i );
} // T: 0.02+

#elif defined( V3 ) // SC: O(1)
string removeConsecutiveCharacter( string s ) {
    return { s.begin(), unique( s.begin(), s.end() )};
} // T: 0.02+

#endif
