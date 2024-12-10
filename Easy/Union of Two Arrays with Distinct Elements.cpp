vector< int > findUnion( vector< int >& a, vector< int >& b ) {
    set< int > s( a.cbegin(), a.cend() );
    for ( const int i : b ) s.insert( i );
    return { s.cbegin(), s.cend() };
}
