long long product( int ar[], int n, long long mod ) {
    long long result{ 1 };
    while ( n-- ) ( result *= ar[ n ] ) %= mod;
    return result;
} // T: 0.15 - 0.16
