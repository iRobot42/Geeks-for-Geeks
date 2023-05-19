vector< string > pattern( string s ){
    vector< string > v;
    for ( size_t i{ s.size() }; i; --i )
        v.push_back( s.substr( 0, i ) );
    return v;
} // T: 0.01
