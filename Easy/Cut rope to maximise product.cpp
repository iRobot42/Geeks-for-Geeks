long long maxProduct( int n ) {
    if ( n < 4 ) return --n;
    switch ( n % 3 ) {
        case 0: return pow( 3, n / 3 );
        case 1: return pow( 3, n / 3 - 1 ) * 4;
        case 2: return pow( 3, n / 3 ) * 2;
    }
}
