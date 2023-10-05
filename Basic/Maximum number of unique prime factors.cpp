int maxUniquePrimeFactors( long long number ) {
    const vector< int > primes{ 2, 3, 5, 7, 11,
        13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    int count{};
    long long product{ 1 };
    for ( const int prime : primes )
        if (( product *= prime ) > number ) break;
        else ++count;
    return count;
} // 0.03+
