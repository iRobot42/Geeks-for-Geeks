long long changeBase( int n, int k ) {
    long long r{}, t{ 1 };
    do r += n % k * t, t *= 10;
    while ( n /= k );
    return r;
} // 0.01+
