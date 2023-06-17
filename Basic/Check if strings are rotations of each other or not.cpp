#define V1

#ifdef V1
bool areRotations( string s1, string s2 ) {
    return s1.size() == s2.size() &&
        ( s1 + s1 ).find( s2 ) != -1;
} // T: 0.28+

#elif defined( V2 )
bool areRotations( string s1, string s2 ) {
    for ( size_t i{ s1.size() }; i; --i ) {
        rotate( s2.begin(), s2.begin() + 1, s2.end() );
        if ( s1 == s2 ) return true; }
    return false;
} // T: 0.64+

#endif
