vector< int > uniqueId( int a[], int n ) {
    vector< int > v;
    bool h[ 10 ]{};
    for ( int i{}; i < n; ++i )
        if ( !h[ a[ i ] ] )
            v.push_back( a[ i ] ),
            h[ a[ i ] ] = true;
    return v;
} // T: 0.01+
