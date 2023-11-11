long long no_of_subarrays( int n, vector< int >& a ) {
    long long c{}, r{};
    for ( const int i : a )
        if ( !i ) ++c;
        else if ( c ) r += c++ * c / 2, c = 0;
    return r + c++ * c / 2;
}
