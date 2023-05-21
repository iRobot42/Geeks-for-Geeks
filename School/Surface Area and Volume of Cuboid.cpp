vector< long long > find( int l, int b, int h ) {
    return { ( 1ll*l*b + 1ll*l*h + 1ll*b*h ) * 2, 1ll*l*b*h };
} // T: 0.01
