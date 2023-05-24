bool check_elements( int a[], int n, int A, int B ) {
    while ( A <= B )
        if ( find( a, a + n, A++ ) == a + n )
            return false;
    return true;
} // T: 0.33 - 0.36
