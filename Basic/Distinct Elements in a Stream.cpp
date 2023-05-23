vector< int > maxDistinctNum( int a[], int n ) {
    vector< int > v( n );
    unordered_map< int, int > h;
    for ( int i{}; i < n; ++i ) {
        if ( a[ i ] > 0 ) h[ a[ i ] ]++;
        else if ( --h[ -a[ i ] ] < 1 )
            h.erase( -a[ i ] );
        v[ i ] = h.size();
    }
    return v;
} // T: 0.56 - 0.62
