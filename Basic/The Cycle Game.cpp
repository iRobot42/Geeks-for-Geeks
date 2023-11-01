int find_division( int x, int y, int n ) {
    return ( x *= 1 + n % 2 ) > y ? x / y : y / x;
} // 0.01+
