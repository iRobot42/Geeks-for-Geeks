int sumDiagonal( int n, int m[][ n ]) {
    int sum = 0;
    while ( n-- ) sum += m[ n ][ n ];
    return sum;
}
