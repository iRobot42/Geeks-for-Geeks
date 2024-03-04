int lastRoom( int a[], vector< pair < int, int >>& vp,
              int n, int m, int k ) {
    int r{ 1 };
    unordered_set< int > e( a, a + m );
    for ( auto& p : vp ) { // [1]
        auto &a{ p.first }, &b{ p.second };
        if ( b == r ) swap( a, b );
        if ( a == r )
            if ( e.find( b ) == e.cend() ) r = b; // [2]
            else return b;
    }
    return r;
}
