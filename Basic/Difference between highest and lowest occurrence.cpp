#define V1

#ifdef V1
int findDiff( int a[], int n ) {
    unordered_map< int, int > h;
    while ( n-- ) h[ a[ n ] ]++;
    const auto m{ minmax_element( h.cbegin(), h.cend(),
        []( const auto& i, const auto& j ) {
            return i.second < j.second; } ) };
    return m.second->second - m.first->second;
} // T: 0.44+

#elif defined( V2 )
int findDiff( int a[], int n ) {
    unordered_map< int, int > h;
    while ( n-- ) h[ a[ n ] ]++;
    int s( 1e5 ), g{};
    for ( const auto& i : h )
        s = min( s, i.second ),
        g = max( g, i.second );
    return g - s;
} // T: 0.44+

#endif
