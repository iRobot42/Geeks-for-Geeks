long double convertToDecimal( string n ) {
    long double r{ stol( n, nullptr, 2 )};
    n = n.substr( n.find( '.' ) + 1 );
    for ( size_t i{}; i < n.size(); ++i )
        if ( n[ i ]-'0' ) r += 1 / pow( 2, i+1 );
    return r;
} // 0.01+
