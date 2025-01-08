int countPairs( vector< int >& arr, int target ) {
    unordered_map< int, int > m;
    int pcount{};
    for ( const int i : arr )
        pcount += m[ target - i ], ++m[ i ];
    return pcount;
}
