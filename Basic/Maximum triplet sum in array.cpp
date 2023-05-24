int maxTripletSum( int a[], int n ) {
    int s{};
    for ( int i{}; i < 3; ++i ) {
        int* m{ max_element( a, a + n ) };
        s += *m, *m = INT_MIN;
    }
    return s;
} // T: 0.20 - 0.22
