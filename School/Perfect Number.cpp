int isPerfect( int n ) {
    int s{}, t{ n };
    do { int  f{ 1 }, i{ 2 };
        while ( i <= t % 10 ) f *= i++;
        s += f;
    } while ( t /= 10 );
    return s == n;
} // T: 0.01
