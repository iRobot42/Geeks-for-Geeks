vector< int > primeOccurences( int a[], int n, int k ) {
    const unordered_set< int > P{
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
        43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    unordered_map< int, int > f;
    while ( n-- ) ++f[ a[ n ]];
    vector< int > v;
    for ( const auto& p : f )
        if ( p.second >= k && P.find( p.second ) != P.cend() )
            v.push_back( p.first );
    if ( v.empty() ) return { -1 };
    return sort( v.begin(), v.end() ), v;
}
