map< int, int > mapInsert( int a[], int n ) {
    map< int, int > m;
    while ( n-- ) m.insert({ a[ n ], n });
    return m;
}
void mapDisplay( map< int, int > m ) {
    for ( const auto& p : m )
        cout << p.first << ' ' << p.second << '\n';
}
void mapErase( map< int, int >& m, int x ) {
    const auto i{ m.find( x )};
    if ( i == m.cend() ) cout << "not found";
    else cout << "erased " << x, m.erase( i );
    cout << endl;
}
