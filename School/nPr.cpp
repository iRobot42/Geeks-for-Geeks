long long nPr( int n, int r ) {
    long long npr{ 1 };
    while ( r-- ) npr *= n--;
    return npr;
} // T: 0.01
