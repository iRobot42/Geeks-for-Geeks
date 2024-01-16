long long pairWithMaxSum( long long a[], long long n ) {
    long long r{};
    while ( --n ) r = max( r, a[ n ] + a[ n-1 ] );
    return r;
}
