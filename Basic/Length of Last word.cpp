#define V1

#ifdef V1
int findLength( string s ) {
    s.erase( s.find_last_not_of( ' ' ));
    return s.size() - s.find_last_of( ' ' );
} // T: 0.01+

#elif defined( V2 )
int findLength( string s ) {
    int i{ s.size() }, c{};
    while ( s[ --i ] == ' ' );
    while ( isalpha( s[ i-- ] )) ++c;
    return c;
} // T: 0.01+

#endif
