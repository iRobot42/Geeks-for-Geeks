vector< int > kLargest( int a[], int n, int k ) {
    priority_queue< int, vector< int >, greater<>> q( a, a + k );
    while ( n-- > k ) if ( a[ n ] >= q.top() ) q.pop(), q.push( a[ n ] );
    vector< int > v( k );
    while ( k-- ) v[ k ] = q.top(), q.pop();
    return v;
}
