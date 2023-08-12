long long findPosition( long long n, long long a ) {
    long long x{ 1 }, y{ 1 }, i{ 2 }, t;
    while ( y % a ) t = x + y, x = y, y = t, ++i;
    return n * i;
} // 0.44+
