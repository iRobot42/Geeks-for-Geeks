int divisibleByDigits( string s ) {
    int r[ 10 ]{}, f[ 10 ]{};
    for ( const char c : s ) {
        *f = c-'0';
        for ( int i{ 2 }; i < 10; ++i )
            r[ i ] = ( r[ i ] * 10 + *f ) % i;
        ++f[ *f ];
    }
    for ( int i{ 1 }; i < 10; ++i )
        if ( !r[ i ]) *r += f[ i ];
    return *r;
} // 0.3+
