int minRemove( vector< int >& a, vector< int >& b ) {
    unordered_map< int, int > m;
    for ( const int i : a ) ++m[ i ];
    return count_if( b.cbegin(), b.cend(),
        [ & ]( int i ){ return m[ i ]-- > 0; });
}
