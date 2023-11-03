string isDeciBinPalin( unsigned n ) {
    string s{ to_string( n )};
    if ( s != string( s.crbegin(), s.crend() )) return "No";
    s.clear();
    do s += n % 2 + '0'; while ( n /= 2 );
    return s == string( s.crbegin(), s.crend() ) ? "Yes" : "No";
} // 0.01+
