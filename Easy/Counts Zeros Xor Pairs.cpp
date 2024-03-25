long long calculate( int a[], int n ) {
    unordered_map< int, int > m;
    long long c{};
    while ( n-- )
        c += ( m.find( a[ n ] ) != m.cend() ) * m[ a[ n ]]++;
    return c;
}
