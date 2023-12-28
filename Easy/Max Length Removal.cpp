int longestNull( string s ) {
    vector< pair< char, int >> v{{ 0, -1 }};
    int r{};
    for ( int i{}; i < s.size(); ++i ) {
        if ( s[ i ] == '0' && v.back().first == '0'
             && v[ v.size()-2 ].first == '1')
            v.pop_back(), v.pop_back();
        else v.push_back( make_pair( s[ i ], i ));
        r = max( r, i - v.back().second );
    }
    return r;
}
