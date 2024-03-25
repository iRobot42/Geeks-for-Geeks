int maxDiffIndex( int a[], int n ) {
    int maxgap{};
    unordered_map< int, int > m;
    while ( n-- )
        if ( m.find( a[ n ] ) == m.cend() ) m[ a[ n ]] = n;
        else maxgap = max( maxgap, m[ a[ n ]] - n );
    return maxgap;
}
