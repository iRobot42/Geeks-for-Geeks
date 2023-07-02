string getCrazy( string s ) {
    for ( size_t i{ islower( s.front() ) ? 1 : 0 }; i < s.size(); ++i )
        s[ i ] = toupper( s[ i ] ), s[ ++i ] = tolower( s[ i ] );
    return s;
} // T: 0.03+
