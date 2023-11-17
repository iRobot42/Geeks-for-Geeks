int countOccurence( int a[], int n, int k ) {
    unordered_map< int, int > m;
    int d{ n / k }, c{};
    while ( n-- ) ++m[ a[ n ]];
    for ( const auto& p : m )
        if ( p.second > d ) ++c;
    return c;
}
