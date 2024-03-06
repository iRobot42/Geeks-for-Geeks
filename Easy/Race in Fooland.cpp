#define VERSION 2

#if VERSION == 1
int emptyLanes( pair< int, int > a[], int n, int tracks ) {
    vector< bool > blocked( tracks );
    while ( n-- ) fill( blocked.begin() + a[ n ].first - 1,
                        blocked.begin() + a[ n ].second, true );
    return count( blocked.cbegin(), blocked.cend(), false );
}

#elif VERSION == 2
int emptyLanes( pair< int, int > a[], int n, int tracks ) {
    sort( a, a + n );
    int l{ a[ 0 ].first }, r{ a[ 0 ].second }, b{ r };
    tracks -= r - l + 1;
    for ( int i{ 1 }; i < n; ++i )
        l = a[ i ].first, r = a[ i ].second,
        l > b ? tracks -= r - l + 1, b = r :
        r > b ? tracks -= r - b, b = r : 0;
    return tracks;
}

#endif
