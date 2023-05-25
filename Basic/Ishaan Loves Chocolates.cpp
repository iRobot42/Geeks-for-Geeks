#define V2

#ifdef V1
int chocolates( int n, vector< int >& a ) {
    return *min_element( a.cbegin(), a.cend() );
} // T: 0.20+

#elif defined( V2 )
int chocolates( int n, vector< int >& a ) {
    auto l{ &a.front() }, r{ &a.back() };
    while ( l < r ) *l > *r ? l++ : r--;
    return *l;
} // T: 0.18+

#endif
