vector< long long > lcmAndGcd( long long a, long long b ) {
    const long long gcd{ __gcd( a, b )};
    return { a * b / gcd, gcd };
} // 0.01+
