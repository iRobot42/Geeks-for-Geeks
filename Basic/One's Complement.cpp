int onesComplement( int n ) {
    return n ^ ( 1 << int( log2( n )+1 ))-1;
} // 0.16+
