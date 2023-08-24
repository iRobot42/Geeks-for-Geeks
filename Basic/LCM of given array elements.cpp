int lcmOfArray( int n, int a[] ) {
    int lcm{ *a };
    for ( int i{ 1 }, d( 1e9+7 ); i < n; ++i )
        lcm = 1l * lcm * a[i] / __gcd( lcm, a[i] ) % d;
    return lcm;
} // 0.65+
