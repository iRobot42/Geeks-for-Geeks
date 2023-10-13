int noOfUniqueRectangles( int n ) {
    int r{ sqrt( n )}, c{ r };
    do c += n / r - r;
    while ( --r );
    return c;
} // 0.01+
