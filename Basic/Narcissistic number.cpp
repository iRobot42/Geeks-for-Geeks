int isNarcissistic( int n ) {
    int d{ log10( n ) + 1 }, s{}, t{ n };
    while ( t ) s += pow( t % 10, d ), t /= 10;
    return s == n;
} // 0.01+
