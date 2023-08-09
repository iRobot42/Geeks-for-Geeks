int isPowerOfFour( unsigned n ) {
    while (!( n % 4 )) n /= 4;
    return n == 1;
} // 0.01+
