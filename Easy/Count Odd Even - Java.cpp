void countOddEven( int a[], int n ) {
    const int o{ count_if( a, a + n, []( int i ){ return i & 1; })};
    cout << o << ' ' << n - o;
}
