vector< int > cppOperators( int a, int b ) {
    return { a + b, a * b, abs( a - b ), max( a, b ) / min( a, b ) };
} // T: 0.22 - 0.24
