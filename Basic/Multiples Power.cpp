long long sum( int n ) {
    long long c3{ --n / 3 }, c7{ n / 7 }, c21{ n / 21 };
    return ( 3 * c3 * ++c3 + 7 * c7 * ++c7 - 21 * c21 * ++c21 ) / 2;
} // 0.01+
