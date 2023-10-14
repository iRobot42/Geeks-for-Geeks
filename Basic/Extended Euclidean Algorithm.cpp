vector< int > gcd( int a, int b ) {
    if ( !a ) return { b, 0, 1 };
    vector< int > v{ gcd( b % a, a )};
    return { v[ 0 ], v[ 2 ] - b / a * v[ 1 ], v[ 1 ] };
} // 0.01+
