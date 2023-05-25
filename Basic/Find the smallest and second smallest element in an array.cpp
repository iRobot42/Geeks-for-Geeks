vector< int > minAnd2ndMin( int a[], int n ) {
    vector< int > v( 2, INT_MAX );
    while ( n-- )
        if ( a[ n ] < v.front() )
            v.back() = v.front(), v.front() = a[ n ];
        else if ( a[ n ] < v.back() && a[ n ] != v.front() )
            v.back() = a[ n ];
    return v.back() == INT_MAX ? vector< int >{ -1 } : v;
} // T: 0.33+
