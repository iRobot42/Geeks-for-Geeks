int Countpair( int arr[], int n, int sum ) {
    int l{}, r{ n-1 }, c{};
    while ( l < r ) {
        const int s{ arr[ l ] + arr[ r ] };
        if ( s == sum ) ++c, ++l, --r;
        else if ( s < sum ) ++l;
        else --r;
    }
    return c ? c : -1;
}
