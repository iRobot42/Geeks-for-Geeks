int sumOfDependencies( vector< int > a[], int v ) {
    int e{};
    while ( v-- ) e += a[ v ].size();
    return e;
} // 0.01+
