bool areElementsContiguous( int a[], int n ) {
    const unordered_set< int > s( a, a + n );
    const auto p{ minmax_element( s.cbegin(), s.cend() )};
    return *p.second - *p.first == s.size() - 1;
}
