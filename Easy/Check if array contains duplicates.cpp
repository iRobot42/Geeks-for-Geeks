bool checkDuplicates( vector< int >& v ) {
    std::unordered_set< int > s;
    for ( const int i : v )
        if ( !s.insert( i ).second )
            return true;
    return false;
}
