long long setAllOddBits( long long n ) {
    const int b{ log2( n ) + 1 };
    for ( int i{}; i < b; i += 2 )
        n |= 1 << i;
    return n;
} // 0.01+
