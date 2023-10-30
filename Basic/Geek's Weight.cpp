long long total_Money( int n, int k ) {
    return ( n /= k ) * ( n + 1LL ) / 2 * k;
} // 0.01+
