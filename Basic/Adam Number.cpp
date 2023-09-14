int rev( int n ) {
    int r{ n % 10 };
    while ( n /= 10 ) r = r * 10 + n % 10;
    return r;
}
string checkAdamOrNot( int n ) {
    const int r{ rev( n )};
    return n * n == rev( r * r ) ? "YES" : "NO";
} // 0.02+
