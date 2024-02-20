bool hasArrayTwoCandidates( int a[], int n, int x ) {
    unordered_set< int > s;
    while ( n-- )
        if ( s.find( x - a[ n ] ) == s.cend() )
            s.insert( a[ n ] );
        else return true;
    return false;
}
