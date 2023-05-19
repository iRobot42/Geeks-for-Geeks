vector< string > splitString( string S ) {
    string s1, s2, s3;
    for ( const char c : S )
        if ( isalpha( c ) ) s1 += c;
        else if ( isdigit( c ) ) s2 += c;
        else s3 += c;
    return { s1, s2, s3 };
} // T: 0.03
