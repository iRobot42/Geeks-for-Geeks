long lenOfLongIncSubArr( long a[], long n ) {
    long r{ 1 }, i{ r };
    while ( --n )
        if ( a[ n ] > a[ n - 1 ] ) ++i;
        else if ( i > r ) r = i, i = 1;
        else i = 1;
    return max( r, i );
} // T: 0.11+
