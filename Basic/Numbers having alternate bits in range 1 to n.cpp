vector< int > printNumHavingAltBitPatrn( int n ) {
    vector< int > v{ 1 };
    while ( v.back() <= n )
        v.push_back(( v.back() << 1 ) + !( v.back() & 1 ));
    return v.pop_back(), v;
} // 0.01+
