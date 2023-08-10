#define V2

#ifdef V1 // rearrangement
void printPattern( string s ) {
    s = s.substr( s.size() / 2 ) + s.substr( 0, s.size() / 2 );
    for ( size_t i{ 1 }; i <= s.size(); ++i )
        cout << s.substr( 0, i ) + "$ ";
} // 0.01+

#elif defined( V2 ) // algorithm std::rotate
#include <algorithm>
void printPattern( string s ) {
    rotate( s.begin(), s.begin() + s.size() / 2, s.end() );
    for ( size_t i{ 1 }; i <= s.size(); ++i )
        cout << s.substr( 0, i ) + "$ ";
} // 0.01+

#endif
