vector< int > findMean( int a[], int q[], int n, int m ) {
    for ( int i{ 1 }; i < n; ++i )
        a[ i ] += a[ i-1 ];
    vector< int > v;
    for ( int i{}, l, r; i < m; ++i )
        l = q[ i ], r = q[ ++i ],
        v.push_back(( a[ r ] - ( l ? a[ l-1 ] : 0 )) / ( ++r - l ));
    return v;
}
