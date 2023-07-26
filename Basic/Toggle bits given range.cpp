int toggleBits( int n, int l, int r ) {
    return n ^ ( 1 << r - --l ) - 1 << l;
} // 0.01+
