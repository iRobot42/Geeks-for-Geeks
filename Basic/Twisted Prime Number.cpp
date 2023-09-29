bool isPrime( int n ) {
    const int r{ sqrt( n ) };
    for ( int f{ 2 }; f <= r; ++f )
        if (!( n % f )) return false;
    return true; // n > 1;
}
int isTwistedPrime( int n ) {
    if ( !isPrime( n )) return 0;
    int r{ n % 10 };
    while ( n /= 10 ) r = r * 10 + n % 10;
    return isPrime( r );
} // 0.09+
