int maxAmount( int n, int k, int a[] ) {
    int amount{};
    priority_queue< int > q{ a, a + n };
    while ( k-- ) amount += q.top(),
        q.push( q.top()-1 ), q.pop();
    return fmod( amount, 1e9+7 );
}
