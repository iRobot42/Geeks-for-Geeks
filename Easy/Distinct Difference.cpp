vector< int > getDistinctDifference( int n, vector< int >& a ) {
    unordered_set< int > s;
    vector< int > v( n );
    for ( int i{}; i < n; ++i )
        v[ i ] = s.size(), s.insert( a[ i ] );
    s.clear();
    while ( n-- )
        v[ n ] -= s.size(), s.insert( a[ n ] );
    return v;
}
