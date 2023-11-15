vector< int > removeDuplicate( vector< int >& a, int n ) {
    vector< int > v( 100 ), r;
    for ( const int i : a ) if ( !v[ i ] )
        r.push_back( i ), v[ i ] = 1;
    return r;
}
