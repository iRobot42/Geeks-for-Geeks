int equalSum( int n, vector< int >& a ) {
    int psum{}, ssum{ accumulate( a.cbegin(), a.cend(), 0 ) };
    for ( int i{}; i < n; ++i )
        if ( a[ i ] == ssum - psum ) return ++i;
        else psum += a[ i ], ssum -= a[ i ];
    return -1;
}
