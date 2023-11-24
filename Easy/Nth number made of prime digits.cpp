int primeDigits( int n ) {
    int r{}, t{ 1 }, d[]{ 7,2,3,5,7,7,7,7,7,7 };
    do r += d[ n % 4 ] * t, t *= 10;
    while ( --n /= 4 );
    return r;
}
