stack< int > _push( int arr[], int n ) {
    stack< int > s;
    for ( int i{}; i < n; ++i )
        s.push( arr[ i ] );
    return s;
}
void _pop( stack< int > s ) {
    while ( !s.empty() ) {
        cout << s.top() << ' ';
        s.pop();
    }
}
