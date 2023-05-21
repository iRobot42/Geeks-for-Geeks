long long findMaxProduct( int a[], int n, int k ) {
    long long p{ 1 };
    for ( int i{}; i < k; ++i )
        p *= a[ i ];
    long long r{ p };
    for ( int i{ k }; i < n; ++i )
        r = max( r, p = p / a[ i - k ] * a[ i ] );
    return r;
} // T: 0.01
