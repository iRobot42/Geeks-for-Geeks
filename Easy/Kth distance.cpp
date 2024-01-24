bool checkDuplicatesWithinK( int a[], int n, int k ) {
    unordered_set< int > s( a, a + k );
    if ( s.size() != k ) return true;
    for ( int i{ k }; i < n; ++i )
        if ( !s.insert( a[ i ] ).second ) return true;
        else s.erase( a[ i-k ] );
    return false;
}
