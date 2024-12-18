vector< int > makeBeautiful( vector< int > a ) {
    vector< int > v;
    for ( const int i : a )
        v.empty() || v.back() < 0 && i < 0 || v.back() >= 0 && i >= 0
            ? v.push_back( i ) : v.pop_back();
    return v;
}
