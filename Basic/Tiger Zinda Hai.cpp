int count_tabs( string a[], int n ) {
    unordered_set< string > s;
    for ( int i{}; i < n; ++i )
        if ( a[ i ] == "END" ) s.clear();
        else if ( s.find( a[ i ] ) != s.end() )
            s.erase( a[ i ] );
        else s.insert( a[ i ] );
    return s.size();
} // T: 0.22 - 0.25
