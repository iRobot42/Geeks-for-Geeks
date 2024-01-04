int getSingle( int a[], int n ) {
    int x{};
    while ( n-- ) x ^= a[ n ];
    return x;
}
