void insert( unordered_set< int >& s, int x ) {
    s.insert( x );
}
void erase( unordered_set< int >& s, int x ) {
    s.erase( x );
}
int size( unordered_set< int >& s ) {
    return s.size();
}
int find( unordered_set< int >& s, int x ) {
    return s.find( x ) == s.cend() ? -1 : 1;
}
