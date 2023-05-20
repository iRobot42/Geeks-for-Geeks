int circleTouch( int x1, int y1, int r1, int x2, int y2, int r2 ) {
    return hypot( x1 - x2, y1 - y2 ) < r1 + r2;
} // T: 0.28 - 0.33
