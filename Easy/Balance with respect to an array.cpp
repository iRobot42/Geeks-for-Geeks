string isBalanced( int a[], int n, int x ) {
    const int i{ lower_bound( a, a + n, x ) - a };
    return x - a[ i ] == a[ i-1 ] - x || a[ i ] == x
        ? "Balanced" : "Not Balanced";
}
