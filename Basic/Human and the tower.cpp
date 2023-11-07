int findHeightOrDistance( char t, double v, double a ) {
    a = tan( a * 3.14 / 180 );
    return floor( t == 'd' ? v * a : v / a );
} // 0.01+
