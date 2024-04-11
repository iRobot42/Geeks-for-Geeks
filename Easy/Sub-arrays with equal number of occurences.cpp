long long sameOccurrence( int a[], int n, int x, int y ) {
    unordered_map< int, long long > m; int d{};
    while ( n-- ) ++m[ d += ( a[ n ] == x ) - ( a[ n ] == y ) ];
    return accumulate( m.cbegin(), m.cend(), m[ 0 ],
        []( long long acc, const auto& p ){
            return acc + p.second * ( p.second - 1 ) / 2; });
}
