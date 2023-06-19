#define V2

#ifdef V1
bool checkBinary( string s ) {
    const size_t i{ s.find( '1' )};
    if ( i == -1 ) return true;
    s.erase( s.find_last_of( '1' ));
    return s.find( '0', i ) == -1;
} // T: 0.01+

#elif defined( V2 )
bool checkBinary( string s ) {
    return s.find( '1', s.find( '0', s.find( '1' ))) == -1;
} // T: 0.01+

#endif
