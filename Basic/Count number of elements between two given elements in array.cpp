int getCount( int a[], int n, int n1, int n2 ) {
    int l{}, r{ n - 1 };
    while ( l < n && a[ l ] != n1 ) l++;
    while ( r >= 0 && a[ r ] != n2 ) r--;
    return l == r ? 0 : --r - l;
} // T: 0.09 - 0.11
