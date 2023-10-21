int decimalEquivalent( string n, int b ) {
    for ( const char c : n )
        if ( c - ( isdigit( c ) ? '0' : 'A' ) >= b )
            return -1;
    return stoi( n, nullptr, b );
} // 0.01+
