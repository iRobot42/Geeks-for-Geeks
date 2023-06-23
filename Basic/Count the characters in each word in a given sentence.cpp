vector< int > countChars( string s ) {
    vector< int > v;
    int i{};
    for ( const char c : s )
        if ( c != ' ' ) ++i;
        else v.push_back( i ), i = 0;
    return v.push_back( i ), v;
} // T: 0.13+
