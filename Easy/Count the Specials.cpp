#define V2

#ifdef V1
int countSpecials( int a[], int n, int k ) {
    int f{ n / k }, s{ 1001 }, h[ s ]{};
    while ( n-- ) ++h[ a[ n ]];
    return count( h, h + s, f );
}

#elif defined( V2 )
int countSpecials( int a[], int n, int k ) {
    int f{ n / k }, c{};
    unordered_map< int, int > m;
    while ( n-- ) ++m[ a[ n ]];
    for ( const auto& p : m )
        if ( p.second == f ) ++c;
    return c;
}

#endif
