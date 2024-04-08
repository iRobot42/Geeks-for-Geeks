vector< int > maxPrefixes( int* a, int* l, int* r, int n, int q ) {
    vector< int > ms( q );
    for ( int i{}; i < q; ++i ) {
        int ps{ ms[ i ] = a[ l[ i ]] };
        while ( ++l[ i ] <= r[ i ] )
            ms[ i ] = max( ms[ i ], ps += a[ l[ i ]] );
    }
    return ms;
}
