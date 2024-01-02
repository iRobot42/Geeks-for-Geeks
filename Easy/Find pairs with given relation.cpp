int findPairs( int a[], int n ) {
    if ( n < 4 ) return -1;
    unordered_set< int > s;
    for ( int i{}, m{ n-1 }; i < m; ++i )
        for ( int j{ i+1 }; j < n; ++j ) {
            const int p{ a[ i ] * a[ j ] };
            if ( s.find( p ) != s.cend() ) return 1;
            s.insert( p );
        }
    return -1;
}
