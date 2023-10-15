int isTrimorphic( int n ) {
    long m{ pow( n, 3 ) };
    while ( n )
        if ( n % 10 != m % 10 ) return 0;
        else n /= 10, m /= 10;
    return 1;
} // 0.01+
