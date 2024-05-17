int minOperations( int a[], int n, int k ) {
    priority_queue< int, vector< int >, greater< int >> q( a, a + n );
    int c{};
    while ( q.size() > 1 && q.top() < k )
        ++c, n = q.top(), q.pop(), q.push( q.top() + n ), q.pop();
    return q.top() < k ? -1 : c;
}
