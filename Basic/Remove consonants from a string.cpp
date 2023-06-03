#define V2

#ifdef V1
string removeConsonants( string s ) {
    string r;
    for ( const char c : s )
        if ( "aeiouAEIOU"s.find( c ) != string::npos )
            r += c;
    return r.empty() ? "No Vowel" : r;
} // T: 0.11+

#elif defined( V2 )
string removeConsonants( string s ) {
    string r;
    for ( const char c : s )
        switch ( c ) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                r += c;
        }
    return r.empty() ? "No Vowel" : r;
} // T: 0.08+

#endif
