vector< int > arrangeOddAndEven( int a[], int n ) {
    vector< int > e, o, r;
    for ( int i{}; i < n; ++i )
        ( a[ i ] & 1 ? e : o ).push_back( a[ i ] );
    const size_t s{ max( e.size(), o.size() )};
    for ( size_t i{}; i < s; ++i ) {
        if ( i < o.size() ) r.push_back( o[ i ] );
        if ( i < e.size() ) r.push_back( e[ i ] );
    }
    return r;
}
