set< int > setInsert( int a[], int n ) {
    return set< int >( a, a + n );
}
void setDisplay( set< int > s ) {
    for ( const int i : s ) cout << i << ' ';
    cout << endl;
}
void setErase( set< int >& s, int x ) {
    if ( s.find( x ) == s.cend() ) cout << "not found";
    else cout << "erased " << x, s.erase( x );
    cout << endl;
}
