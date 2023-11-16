int maxDistance( int a[], int n ) {
    unordered_map< int, int > m;
    int d{};
    for ( int i{}; i < n; ++i )
        if ( m.find( a[ i ] ) == m.cend() )
            m[ a[ i ]] = i;
        else d = max( d, i - m[ a[ i ]] );
    return d;
}
