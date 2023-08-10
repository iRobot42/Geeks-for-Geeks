void add_value( map< int, int >& m, int x, int y ) {
    m[ x ] = y;
}
int find_value( map< int, int >& m, int x ) {
    return m.find( x ) == m.cend() ? -1 : m[ x ];
}
void print_contents( map< int, int >& m ) {
    for ( const auto& p : m )
        cout << p.first << ' ' << p.second << ' ';
}
