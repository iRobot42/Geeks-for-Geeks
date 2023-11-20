int equilibriumPoint( long long a[], int n ) {
    long long psum{}, ssum{};
    for ( int i{}; i < n; ++i )
        psum += a[ i ];
    while ( n-- ) {
        psum -= a[ n ];
        if ( psum == ssum ) return ++n;
        ssum += a[ n ];
    }
    return -1;
}
