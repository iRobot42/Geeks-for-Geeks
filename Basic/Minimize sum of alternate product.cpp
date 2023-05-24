long long altProduct( long long a[], long long n ) {
    sort( a, a + n );
    long long s{}, m{ n-- / 2 };
    for ( long long i{}; i < m; ++i )
        s += a[ i ] * a[ n - i ];
    return s;
} // T: 0.59 - 0.64
