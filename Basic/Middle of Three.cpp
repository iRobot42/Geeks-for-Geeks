int middle( int a, int b, int c ) {
    return long( c - a ) * ( b - c ) < 0 ?
           long( c - b ) * ( b - a ) < 0 ?
           a : b : c;
} // 0.01+
