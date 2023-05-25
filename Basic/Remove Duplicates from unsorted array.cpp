#define V2

#ifdef V1
vector< int > removeDuplicate( int a[], int n ) {
    vector< int > v;
    bool h[ 100'000 ]{};
    for ( int i{}; i < n; ++i )
        if ( !h[ a[ i ] ] )
            h[ a[ i ] ] = true,
            v.push_back( a[ i ] );
    return v;
} // T: 0.32+

#elif defined( V2 )
vector< int > removeDuplicate( int a[], int n ) {
    vector< int > v;
    unordered_set< int > h;
    for ( int i{}; i < n; ++i )
        if ( h.find( a[ i ] ) == h.cend() )
            h.insert( a[ i ] ),
            v.push_back( a[ i ] );
    return v;
} // T: 0.61+

#endif
