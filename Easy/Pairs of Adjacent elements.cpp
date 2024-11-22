int adjacentPairs( vector< int > arr ) {
    return count_if( arr.cbegin()+1, arr.cend(),
        []( const int& i ){ return i-1 == *prev( &i ); });
}
