int getPairsCount( int a[], int n, int k ) {
    unordered_map< int, int > m;
    int c{};
    while ( n-- ) c += m[ k - a[ n ]], ++m[ a[ n ]];
    return c;
}
