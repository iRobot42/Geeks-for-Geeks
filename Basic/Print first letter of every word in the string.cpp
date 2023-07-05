string firstAlphabet( string s ) {
    string r{ s.front() };
    for ( const char& c : s )
        if ( c == ' ' ) r += *next( &c );
    return r;
} // 0.02+
