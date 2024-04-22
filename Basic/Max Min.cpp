int findSum( int a[], int n ) {
    const auto m{ minmax_element( a, a + n ) };
    return *m.first + *m.second;
}
