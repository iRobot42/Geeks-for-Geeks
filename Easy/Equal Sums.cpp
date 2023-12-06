vector< int > EqualSum( int a[], int n ) {
    if ( n == 1 ) return { *a, 2, 2 };
    vector< int > v{ INT_MAX };
    int l{ *a }, r{ accumulate( a+1, a+n, 0 )};
    for ( int i{ 1 }; i < n; ++i ) {
        const int d{ abs( l - r )};
        if ( d < v.front() )
            v = { d, i+1, ( l > r )+1 };
        l += a[ i ], r -= a[ i ];
    }
    return v;
}
