long long performOperation( long long n ) {
    string s{ to_string( n ) };
    for ( char& c : s )
        if ( c == '5' ) ++c;
        else if ( c == '6' ) --c;
    return n + stoll( s );
} // T: 0.01+
