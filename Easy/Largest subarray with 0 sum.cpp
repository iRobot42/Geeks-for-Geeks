int maxLen( vector< int >& a, int n ) {
    int r{}, s{};
    unordered_map< int, int > m{{ 0, -1 }};
    for ( int i{}; i < n; ++i )
        m.find( s += a[ i ] ) == m.cend() ?
            m[ s ] = i : r = max( r, i - m[ s ] );
    return r;
}
