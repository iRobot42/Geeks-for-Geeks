vector< int > valid( vector< int >& arr ) {
    size_t i{};
    while ( !arr[ i ] ) ++i;
    if ( i == arr.size() ) return arr;
    vector< int > res{ arr[ i ] };
    while ( ++i < arr.size() )
        if ( arr[ i ] )
            if ( res.back() == arr[ i ] )
                res.back() *= 2;
            else res.push_back( arr[ i ] );
    return res.resize( arr.size() ), res;
}
