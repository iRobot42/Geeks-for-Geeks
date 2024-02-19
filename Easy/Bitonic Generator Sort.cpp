void bitonicGenerator( int a[], int n ) {
    vector< int > e, o;
    for ( int i{}; i < n; ++i )
        ( i & 1 ? o : e ).push_back( a[ i ] );
    sort( e.begin(), e.end() );
    sort( o.begin(), o.end(), greater<>() );
    while ( !o.empty() ) a[ --n ] = o.back(), o.pop_back();
    while ( !e.empty() ) a[ --n ] = e.back(), e.pop_back();
}
