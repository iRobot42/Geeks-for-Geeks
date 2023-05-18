int getSum( int a[], int n ) {
    int sum{};
    while ( n-- ) sum += a[ n ];
    return sum;
} // T: 0.39 - 0.42
