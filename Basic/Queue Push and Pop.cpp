queue< int > _push( int a[], int n ) {
    queue< int > q;
    for ( int i{}; i < n; ++i )
        q.push( a[ i ] );
    return q;
}
void _pop( queue< int > q ) {
    while ( !q.empty() ) {
        cout << q.front() << ' ';
        q.pop();
    }
}
// 0.01+
