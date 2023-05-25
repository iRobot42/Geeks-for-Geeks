#define V2

#ifdef V1
pair< long long, long long > getMinMax( long long a[], int n ) {
    const auto m{ minmax_element( a, a + n ) };
    return { *m.first, *m.second };
} // T: 0.45+

#elif defined( V2 )
pair< long long, long long > getMinMax( long long a[], int n ) {
    pair< long long, long long > p{ *a, *a };
    while ( --n )
        p.first = min( p.first, a[ n ] ),
        p.second = max( p.second, a[ n ] );
    return p;
} // T: 0.45+

#endif
