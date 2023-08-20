int easyProblem( int k, int l, int r, int x, int y ) {
    while ( x <= y ) {
        const int t{ k * x++ };
        if ( t > r ) return 0;
        if ( t >= l ) return 1;
    }
    return 0;
} // 0.1+
