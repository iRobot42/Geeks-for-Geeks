void add_value( unordered_map< int, int >& m, int x, int y ) {
    m[ x ] = y;
}
int find_value( unordered_map< int, int >& m, int x ) {
    const auto i{ m.find( x )};
    return i == m.cend() ? -1 : i->second;
}
int getSize( unordered_map< int, int >& m ) {
    return m.size();
}
void removeKey( unordered_map< int, int >& m, int x ) {
    m.erase( x );
}
