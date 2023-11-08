int possibleOrNot( int a1, int a2, int b1, int b2, int c1, int c2 ) {
    return hypot( a1 - b1, a2 - b2 ) == hypot( c1 - b1, c2 - b2 );
} // 0.01+
