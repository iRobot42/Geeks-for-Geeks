long long subMatrixSum( vector< int > a[], int n, int m,
                        int x1, int y1, int x2, int y2 ) {
    long long sum{};
    for ( int x{ x1-1 }; x < x2; ++x )
        for ( int y{ y1-1 }; y < y2; ++y )
            sum += a[ x ][ y ];
    return sum;
}
