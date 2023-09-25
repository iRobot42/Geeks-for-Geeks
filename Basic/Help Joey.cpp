int countSCC( int c, int s ) {
    return c < ( s <<= 1 ) ? c >> 1 : c + s >> 2;
} // 0.01+
