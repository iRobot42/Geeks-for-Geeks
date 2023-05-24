int sumOfDistinct( int a[], int n ) {
    int r{};
    while ( n-- ) {
        const int t{ abs( a[ n ] ) - 1 };
        if ( a[ t ] > 0 ) r += t + 1, a[ t ] *= -1;
    }
    return r;
} // T: 0.28 - 0.30
