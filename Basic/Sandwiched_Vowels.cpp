string Sandwiched_Vowel( string s ) {
    bool v[ CHAR_MAX ]{};
    v[ 'a' ] = v[ 'e' ] = v[ 'i' ] = v[ 'o' ] = v[ 'u' ] = true;
    for ( size_t i{ 1 }; i < s.size() - 1; ++i )
        if ( v[ s[ i ] ] & !v[ s[ i - 1 ] ] & !v[ s[ i + 1 ] ] )
            s.erase( i, 1 );
    return s;
} // T: 0.04 - 0.05
