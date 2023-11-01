long long nthDayPage( long long n, long long k ) {
    long long r{ 1 }, m( 1e9+7 );
    while ( --n ) r = r * k % m;
    return r;
} // 0.03+
