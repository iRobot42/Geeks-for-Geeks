long long minValue( int a[], int b[], int n ) {
    sort( a, a + n, less<>() );
    sort( b, b + n, greater<>() );
    long long r{};
    while ( n-- ) r += a[ n ] * b[ n ];
    return r;
}
