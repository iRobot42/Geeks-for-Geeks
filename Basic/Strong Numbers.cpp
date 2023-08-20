int is_StrongNumber( int n ) {
    constexpr int f[]{ 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
    int t{ n }, s{};
    do s += f[ t % 10 ];
    while ( t /= 10 );
    return s == n;
} // 0.01+
