unsigned long long countSub( int a[], int n ) {
    unsigned long long s[ 10 ]{};
    for ( int i{}; i < n; ++s[ a [ i++ ]] )
        for ( int j{ a[ i ]-1 }; j >= 0; --j )
            s[ a[ i ]] += s[ j ];
    return accumulate( s, s + 10, 0ULL );
}
