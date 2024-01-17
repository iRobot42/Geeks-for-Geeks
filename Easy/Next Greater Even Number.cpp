long long getNextEven( string s ) {
    while ( next_permutation( s.begin(), s.end() ))
        if (!( s.back() & 1 )) return stoll( s );
    return -1LL;
}
