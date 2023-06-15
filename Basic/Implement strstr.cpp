#define V3

#ifdef V1
int strstr( string s, string x ) {
    return s.find( x );
} // T: 0.01+

#elif defined( V2 )
int strstr( string s, string x ) {
    for ( size_t i{}, I{ s.size() - x.size() + 1 }; i < I; ++i )
        if ( s.substr( i, x.size() ) == x ) return i;
    return -1;
} // T: 0.01+

#elif defined( V3 )
int strstr( string s, string x ) {
    for ( size_t i{}, I{ s.size() - x.size() + 1 }; i < I; ++i )
        for ( size_t j{}; j < x.size(); ++j )
            if ( s[ i + j ] != x[ j ] ) break;
            else if ( j == x.size() - 1 ) return i;
    return -1;
} // T: 0.01+

#endif
