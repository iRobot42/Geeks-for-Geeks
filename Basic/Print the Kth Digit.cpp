int kthDigit( int a, int b, int k ) {
    return long( pow( a, b ) / pow( 10, --k )) % 10;
} // 0.01+
