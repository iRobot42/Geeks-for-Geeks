int isDisarium( int n ) {
    int s{}, t{ n }, p{ to_string( n ).size() };
    while ( p ) s += pow( t % 10, p-- ), t /= 10;
    return s == n;
} // 0.03+
