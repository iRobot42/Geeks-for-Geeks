void print( deque< int >& a ) {
    if ( a.empty() ) cout << -1;
    else for ( const int i : a ) cout << i << ' ';
    cout << '\n';
}
void add_in_front( deque< int >& a, int x ) {
    a.push_front( x );
}
void add_in_back( deque< int >& a, int x ) {
    a.push_back( x );
}
void remove_from_back( deque< int >& a ) {
    a.pop_back();
}
void remove_from_front( deque< int >& a ) {
    a.pop_front();
}
void sort( deque< int >& a ) {
    sort( a.begin(), a.end() );
}
void reverse( deque< int >& a ) {
    reverse( a.begin(), a.end() );
}
int size( deque< int >& a ) {
    return a.size();
}
int element_at_front( deque< int >& a ) {
    return a.front();
}
int element_at_back( deque< int >& a ) {
    return a.back();
}
