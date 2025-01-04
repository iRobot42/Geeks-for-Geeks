int nthItem( int l1, int l2, int* a, int* b, int n ) {
    set< int > s;
    for ( int ia{}; ia < l1; ++ia )
        for ( int ib{}; ib < l2; ++ib )
            s.insert( a[ ia ] + b[ ib ] );
    return s.size() < n ? -1 : *next( s.begin(), --n );
}
