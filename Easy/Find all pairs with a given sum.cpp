vector< pair< int, int >> allPairs( int a[], int b[],
                                    int n, int m, int x ) {
    vector< pair< int, int >> r;
    unordered_set< int > s( a, a + n );
    while ( m-- ) {
        const int t{ x - b[ m ] };
        if ( s.find( t ) != s.cend() )
            r.push_back({ t, b[ m ] });
    }
    return sort( r.begin(), r.end() ), r;
}
