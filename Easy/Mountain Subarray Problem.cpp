vector< bool > processQueries( int a[], int n,
        vector< pair< int, int >>& qq, int q ) {
    vector< int > ll( n ), rr( n, n-1 );
    for ( int l{ 1 }, r{ n-2 }; l < n; ++l, --r )
        ll[ l ] = a[ l ] > a[ l-1 ] ? l : ll[ l-1 ],
        rr[ r ] = a[ r ] > a[ r+1 ] ? r : rr[ r+1 ];
    vector< bool > v( q );
    while ( q-- ) v[ q ] =
        ll[ qq[ q ].second ] <= rr[ qq[ q ].first ];
    return v;
}
