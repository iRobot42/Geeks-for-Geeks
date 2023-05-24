long long find_multiplication( int a[], int b[], int n, int m ) {
    return *max_element( a, a + n ) * *min_element( b, b + m );
} // T: 0.36 - 0.42
