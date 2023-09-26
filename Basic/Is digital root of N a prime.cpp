int digitalRoot( int n ) {
    return ( n %= 9 ) == 2 || n == 3 || n == 5 || n == 7;
} // 0.01+
