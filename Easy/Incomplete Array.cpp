int countElements( int n, int a[] ) {
    const unordered_set< int > s( a, a + n );
    const auto m{ minmax_element( s.cbegin(), s.cend() )};
    return *m.second - *m.first - s.size() + 1;
}
