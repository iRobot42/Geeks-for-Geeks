#define V1

#ifdef V1
string findMissing( int a[], int n ) {
    const int S{ *max_element( a, a + n ) + 1 };
    bool h[ S ]{};
    while ( n-- ) h[ a[ n ] ] = true;
    string s;
    for ( ++n; n < S; ++n )
        if ( !h[ n ] ) {
            s += to_string( n );
            if ( !h[ n + 1 ] ) {
                while ( !h[ ++n ] );
                s += '-' + to_string( n - 1 );
            }
            s += ' ';
        }
    return s.empty() ? "-1" : s;
} // T: 0.57+

#elif defined( V2 )
string findMissing( int a[], int n ) {
    if ( n == 1 && !*a ) return "-1";
    sort( a, a + n );
    string s{ *a > 1 ? "0-" + to_string( *a - 1 ) + ' ' :
              *a == 1 ? "0 " : "" };
    for ( int i{ 1 }; i < n; ++i ) {
        int d{ a[ i ] - a[ i - 1 ] };
        if ( d >= 2 ) s += to_string( a[ i - 1 ] + 1 );
        if ( d > 2 ) s += '-' + to_string( a[ i ] - 1 );
        if ( d ) s += ' ';
    }
    return s;
} // T: 0.81+

#endif
