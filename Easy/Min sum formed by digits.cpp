long long minSum( int a[], int n ) {
    sort( a, a + n );
    vector< long long > v( 2 );
    for ( int i{}; i < n; ++i )
        ( v[ i & 1 ] *= 10 ) += a[ i ];
    return v.front() + v.back();
}
