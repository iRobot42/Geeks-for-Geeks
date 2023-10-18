bool isLeapYear( int y ) {
    return !( y % 400 ) || ( y % 100 && !( y % 4 ));
}
int calcDays( int d, int m, int y ) {
    const int DM[]{ 0, 31, 28 + isLeapYear( y ),
        31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    while ( --y ) d += 365 + isLeapYear( y );
    return accumulate( DM, DM + m, d );
}
int noOfDays( int d1, int m1, int y1, int d2, int m2, int y2 ) {
    return abs( calcDays( d2, m2, y2 ) - calcDays( d1, m1, y1 ));
} // 0.02+
