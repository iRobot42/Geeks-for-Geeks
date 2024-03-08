int Pair_minimum( int* a, int n ) {
    sort( a, a + ( n *= 2 ));
    int msum{};
    for ( int l{}, r{ --n }; l < r; ++l, --r )
        msum = max( msum, a[ l ] + a[ r ] );
    return msum;
}
