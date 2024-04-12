vector< int > printClosest( int* arr, int* brr, int n, int m, int x ) {
    int l{}, r{ m-1 }, a{}, b{}, xmin{ INT_MAX };
    while ( l < n && r >= 0 ) {
        const int s{ arr[ l ] + brr[ r ] }, xcur{ abs( x - s ) };
        if ( xcur < xmin ) xmin = xcur, a = l, b = r;
        s < x ? ++l : --r;
    }
    return { arr[ a ], brr[ b ] };
}
