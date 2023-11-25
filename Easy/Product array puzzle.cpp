using VLL = vector< long long >;
VLL productExceptSelf( VLL& vn, int n ) {
    auto p{ 1LL };
    VLL vp( n, p );
    for ( int i{}; i < n; ++i ) // -->
        vp[ i ] *= p, p *= vn[ i ];
    p = 1LL;
    while ( n-- ) // <--
        vp[ n ] *= p, p *= vn[ n ];
    return vp;
}
