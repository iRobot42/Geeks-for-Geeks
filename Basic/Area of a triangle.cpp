double findArea( int a, int b, int c ) {
    if ( a + b <= c || a + c <= b || b + c <= a )
        return 0.0;
    const double s{( a + b + c ) / 2.0 };
    return sqrt( s * ( s-a ) * ( s-b ) * ( s-c ));
} // 0.26+
