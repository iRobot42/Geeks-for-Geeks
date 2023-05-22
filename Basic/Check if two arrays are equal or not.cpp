#define V2

#if defined( V1 )
bool check( vector< ll > a, vector< ll > b, int n ) {
    sort( a.begin(), a.end() );
    sort( b.begin(), b.end() );
    return a == b;
} // T: 0.46 - 0.50

#elif defined( V2 )
bool check( vector< ll > a, vector< ll > b, int n ) {
    unordered_map< ll, int > h;
    for ( const ll& i : a ) h[ i ]++;
    for ( const ll& i : b ) h[ i ]--;
    for ( const auto& i : h )
        if ( i.second ) return false;
    return true;
} // T: 0.43 - 0.47

#endif
