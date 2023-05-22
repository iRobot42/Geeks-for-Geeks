#define V1

#ifdef V1
string PartyType( long long a[], int n ) {
    sort( a, a + n );
    while ( --n ) if ( a[ n ] == a[ n - 1 ] )
        return "BOYS";
    return "GIRLS";
} // T: 0.59 - 0.65

#elif defined( V2 )
string PartyType( long long a[], int n ) {
    unordered_set< long long > h( a, a + n );
    return h.size() == n ? "GIRLS" : "BOYS";
} // T: 0.72 - 0.85

#endif
