int minimizeSum( int n, vector< int > a ) {
    priority_queue< int, vector< int >, greater< int >>
        q( a.cbegin(), a.cend() );
    int s{};
    while ( q.size() > 1 ) {
        int t{ q.top() };
        q.pop(), t += q.top(), q.pop();
        s += t, q.push( t );
    }
    return s;
}
