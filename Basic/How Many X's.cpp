int countX( int l, int r, int x ) {
    int c{};
    while ( ++l < r ) {
        int t{ l };
        do if ( t % 10 == x ) ++c;
        while ( t /= 10 );
    }
    return c;
} // 0.19+
