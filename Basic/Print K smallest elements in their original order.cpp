vector< int > kSmallestElements( int a[], int n, int k ) {
    vector< int > v( a, a + n );
    sort( v.begin(), v.end() );
    unordered_map< int, int > m;
    for ( int i{}; i < k; ++i ) m[ v[ i ] ]++;
    v.clear();
    for ( int i{}; v.size() < k; ++i )
        if ( m[ a[ i ] ]-- > 0 )
            v.push_back( a[ i ] );
    return v;
} // T: 0.65+
