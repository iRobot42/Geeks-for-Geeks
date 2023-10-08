int isValidDate( int d, int m, int y ) {
    const int mdays[]{ 0, 31, 28 +
        (!( y % 400 ) || ( y % 100 && !( y % 4 ))),
        31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return y >= 1800 && y <= 9999
        && m >= 1 && m <= 12
        && d >= 1 && d <= mdays[ m ];
} // 0.01+
