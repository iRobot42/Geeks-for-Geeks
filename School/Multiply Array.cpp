int product( int a[], int n ) {
    int p{ 1 };
    while ( n-- ) p *= a[ n ];
    return p;
} // T: 0.01
