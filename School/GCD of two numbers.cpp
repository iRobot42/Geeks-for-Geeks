int gcd( int a, int b ) {
    return !b ? a : gcd( b, a % b );
} // T: 0.01
