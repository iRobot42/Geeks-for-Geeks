int numOfsubarrays( int a[], int n ) {
    int c{};
    for ( int i{}; i < n; ++i ) {
        int s{}, p{ 1 };
        for ( int j{ i }; j < n; ++j )
            if (( s += a[ j ]) == ( p *= a[ j ])) ++c;
    }
    return c;
}
