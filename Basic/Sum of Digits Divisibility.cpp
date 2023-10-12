int isDivisible( int n ) {
    int t{ n }, s{};
    do s += t % 10;
    while ( t /= 10 );
    return !( n % s );
} // 0.01+
