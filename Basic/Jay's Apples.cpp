int minimum_apple( int a[], int n ) {
    return unordered_set< int >( a, a + n ).size();
} // T: 0.7+
