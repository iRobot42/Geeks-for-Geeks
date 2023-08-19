long long getCount( long long n, long long d ) {
    long long l{ 1 }, r{ n };
    do { long long mid{ l + r >> 1 }, temp{ mid }, sum{};
        do sum += temp % 10; while ( temp /= 10 );
        mid - sum < d ? l = ++mid : r = --mid;
    } while ( l <= r );
    return n - r;
} // 0.01+
