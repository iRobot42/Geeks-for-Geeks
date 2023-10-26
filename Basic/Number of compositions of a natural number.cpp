int no_of_ways( int n ) {
    --n;
    long x{ 1 }, p{ 2 }, m( 1e9+7 );
    do x = n & 1 ? x * p % m : x, p = p * p % m;
    while ( n /= 2 );
    return x;
} // 0.01+
