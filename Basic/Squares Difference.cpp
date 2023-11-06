long long squaresDiff( int n ) {
    return abs( n * ( n+1 ) * ( 2*n+1 ) / 6 // sum of squares
              - pow( n * ( n+1 ) / 2, 2 )); // square of sum
} // 0.01+
