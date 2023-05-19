vector< int > count( string s ) {
    vector< int > v( 4 );
    for ( const char c : s )
        if ( isupper( c ) ) v[ 0 ]++;
        else if ( islower( c ) ) v[ 1 ]++;
        else if ( isdigit( c ) ) v[ 2 ]++;
        else v[ 3 ]++;
    return v;
} // T: 0.08 - 0.09
