int searchInSorted( int a[], int n, int k ) { 
    return binary_search( a, a + n, k ) ? 1 : -1;
} // T: 0.69+
