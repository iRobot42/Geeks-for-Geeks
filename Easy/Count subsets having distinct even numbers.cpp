long long countSubsets( int a[], int n ) {
    unordered_set< int > e;
    while ( n-- ) if (!( a[ n ] & 1 )) e.insert( a[ n ] );
    return ( 1LL << e.size() ) - 1; // or std::powl
}
