int findSum( int a[], int n ) {
    const unordered_set< int > s( a, a + n );
    return accumulate( s.cbegin(), s.cend(), 0 );
} // T: 0.41 - 0.45
