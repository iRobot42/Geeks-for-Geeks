#define V2

#ifdef V1
int isPossible( string s ) {
    int h[ 26 ]{}, odd{};
    for ( const char c : s ) ++h[ c - 97 ];
    for ( int i{}; i < 26; ++i )
        if ( h[ i ] & 1 ) ++odd;
        else if ( odd > 1 ) return 0;
    return 1;
} // T: 0.17+

#elif defined( V2 )
int isPossible( string s ) {
    int h[ 26 ]{};
    for ( const char c : s ) ++h[ c - 97 ];
    return count_if( h, h + 26, []( int i ){ return i & 1; } ) < 2;
} // T: 0.18+

#endif
