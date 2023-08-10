void insert( set< int >& s, int x ) {
    s.insert( x );
}
void print_contents( set< int >& s ) {
    for ( const int i : s ) cout << i << ' ';
}
void erase( set< int >& s, int x ) {
    s.erase( x );
}
int find( set< int >& s, int x ) {
    return s.find( x ) == s.cend() ? -1 : 1;
}
int size( set< int >& s ) {
    return s.size();
}
