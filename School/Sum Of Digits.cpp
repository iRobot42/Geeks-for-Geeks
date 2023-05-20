int sumOfDigits( int n ) {
    int s{};
    do s += n % 10;
    while ( n /= 10 );
    return s;
} // T: 0.01
