int replaceBit( int n, int k ) {
    return n & ~( 1 << int( log2( n )) - --k );
} // T: 0.01+
