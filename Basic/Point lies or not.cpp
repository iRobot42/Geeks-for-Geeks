string isInsideTri( int x1, int y1, int x2, int y2, int x3, int y3,
                    int x, int y ) {
    bool s{ signbit(( x1-x ) * ( y2-y1 ) - ( x2-x1 ) * ( y1-y ))};
    return signbit(( x2-x ) * ( y3-y2 ) - ( x3-x2 ) * ( y2-y )) == s
        && signbit(( x3-x ) * ( y1-y3 ) - ( x1-x3 ) * ( y3-y )) == s
        ? "Yes" : "No";
} // 0.01+
