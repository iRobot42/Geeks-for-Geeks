#define V2

#ifdef V1 // do..while
int countNumberswith4( int n ) {
    int count{};
    do { int temp{ n };
        do if ( temp % 10 == 4 ) {
            ++count; break;
        } while ( temp /= 10 );
    } while ( --n );
    return count;
} // 0.03+

#elif defined( V2 ) // string
int countNumberswith4( int n ) {
    int count{};
    do if ( to_string( n ).find( '4' ) != string::npos )
        ++count;
    while ( --n );
    return count;
} // 0.17+

#endif
