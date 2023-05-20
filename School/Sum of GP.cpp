long sum_of_gp( long n, long a, long r ) {
    return a * ( r == 1 ? n : ( 1 - pow( r, n ) ) / ( 1 - r ) );
} // T: 0.01
