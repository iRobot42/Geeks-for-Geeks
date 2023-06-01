long long maxPoint( int n, int k, long long a[], long long b[] ) {
    long long r{};
    while ( n-- ) r = max( r, k / a[ n ] * b[ n ] );
    return r;
} // T: 0.04+
