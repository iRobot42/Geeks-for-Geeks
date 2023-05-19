#define V1

#if defined( V1 )
string removeVowels( string S ) {
    string s;
    for ( const char c : S )
        switch ( c ) {
            case 'a': case 'e': case 'i': case 'o': case 'u': break;
            default: s += c;
        }
    return s;
} // T: 0.06 - 0.07

#elif defined( V2 )
string removeVowels( string S ) {
    return { S.begin(), copy_if( S.cbegin(), S.cend(), S.begin(),
        []( char c ){ return "aeiou"s.find( c ) == string::npos; } ) };
} // T: 0.11 - 0.12

#elif defined( V3 )
string removeVowels( string S ) {
    string s;
    for ( const char c : S )
        if ( "aeiou"s.find( c ) == string::npos ) s += c;
    return s;
} // T: 0.10 - 0.11
#endif
