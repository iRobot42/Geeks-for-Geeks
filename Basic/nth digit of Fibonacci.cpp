char nthFibonacciDigit( long long n ) {
    long long t{}, f{ 1 }, i{ n-1 };
    string s;
    do s += to_string( f ), swap( t += f, f );
    while ( --n );
    return s[ i ];
} // 0.01+
