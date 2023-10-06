#define V2

#ifdef V1
string checkFibonacci( int n ) {
    const int f[]{ 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    return find( f, f + 10, n ) != f + 10 ? "Yes" : "No";
} // 0.01+

#elif defined( V2 )
string checkFibonacci( int n ) {
    const int p{ 5 * n * n };
    const double r1{ sqrt( p - 4 )}, r2{ sqrt( p + 4 )};
    return r1 == floor( r1 ) || r2 == floor( r2 ) ? "Yes" : "No";
} // 0.01+

#endif
