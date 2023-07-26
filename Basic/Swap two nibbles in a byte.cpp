int swapNibbles( int n ) {
    //return ( n & 15 ) << 4 | n >> 4;
    return char( n << 4 ) | n >> 4;
} // 0.01+
