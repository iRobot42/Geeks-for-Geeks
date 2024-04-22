int peakElement( int a[], int n ) {
    return distance( a, max_element( a, a + n ));
}
