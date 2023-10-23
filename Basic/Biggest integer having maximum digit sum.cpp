long long sum( long long n ) {
    return n ? n % 10 + sum( n / 10 ) : 0;
}
long long findMax( long long n ) {
    long long r{ n }, sr{ sum( r )}, m{ 1 };
    do { long long l{( n-1 ) * m + m-1 }, sl{ sum( l )};
        if ( sl > sr ) r = l, sr = sl;
        m *= 10;
    } while ( n /= 10 );
    return r;
} // 0.01+
