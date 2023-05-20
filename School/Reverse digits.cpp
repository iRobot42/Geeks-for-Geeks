long long reverse_digit( long long n ) {
    long long r{};
    do ( r *= 10 ) += n % 10;
    while ( n /= 10 );
    return r;
} // T: 0.02
