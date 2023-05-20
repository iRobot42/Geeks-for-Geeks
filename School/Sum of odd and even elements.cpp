vector< int > find_sum( int n ) {
    int t{ n++ / 2 };
    return { ( n /= 2 ) * n, t++ * t };
} // T: 0.02 - 0.03
