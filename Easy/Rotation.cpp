int findKRotation( int a[], int n ) {
    int k{}; --n; // left and right
    while ( k < n ) {
        int m{ k + n >> 1 };
        a[ m ] > a[ n ] ? k = ++m : n = m;
    }
    return k;
}
