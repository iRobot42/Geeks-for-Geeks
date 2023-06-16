long binarySubstring( int n, string a ) {
    const long c{ count( a.cbegin(), a.cend(), '1' ) };
    return c * ( c - 1 ) / 2;
} // T: 0.04+
