int countPairs( int a1[], int a2[], int m, int n, int x ) {
    int c{}, i{}, j{ n - 1 };
    while ( a1[ i ] < x && j >= 0 )
        if ( a1[ i ] + a2[ j ] < x ) i++;
        else if ( a1[ i ] + a2[ j ] > x ) j--;
        else { c++; i++; }
    return c;
} // T: 0.16 - 0.17
