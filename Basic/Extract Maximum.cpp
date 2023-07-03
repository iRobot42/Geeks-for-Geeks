int extractMaximum( string s ) {
    for ( char& c : s )
        if ( !isdigit( c )) c = ' ';
    int x{ -1 }, n;
    istringstream ss( s );
    while ( ss >> n ) x = max( x, n );
    return x;
} // T: 0.03+
