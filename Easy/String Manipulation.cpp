int removeConsecutiveSame( vector< string > v ) {
    stack< string > s;
    for ( const auto& w : v )
        s.empty() || s.top() != w ? s.push( w ) : s.pop();
    return s.size();
}
