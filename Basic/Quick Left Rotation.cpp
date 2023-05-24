void leftRotate( int a[], int k, int n ) {
    rotate( a, a + k % n, a + n );
} // T: 0.27 - 0.30
