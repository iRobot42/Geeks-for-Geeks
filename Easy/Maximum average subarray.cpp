int findMaxAverage( int a[], int n, int k ) {
    int index{}, sum{ accumulate( a, a + k, 0 ) }, msum{ sum };
    for ( int i{ k }; i < n; ++i )
        if (( sum += a[ i ] - a[ i-k ] ) > msum )
            msum = sum, index = i - k + 1;
    return index;
}
