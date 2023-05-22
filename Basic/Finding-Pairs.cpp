int count_pairs( vector< char >& a, string& s, int n, int m ) {
    bool h[ CHAR_MAX ]{};
    while ( m ) h[ s[ --m ] ] = true;
    int c{};
    while ( n ) if ( h[ a[ --n ] ] & h[ a[ --n ] ] ) c++;
    return c;
} // T: 0.07 - 0.09
