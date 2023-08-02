bool pairWiseConsecutive( stack< int > s ) {
    while ( !s.empty() ) {
        const int t{ s.top() };
        s.pop();
        if ( s.empty() ) return true;
        if ( abs( t - s.top() ) != 1 )
            return false;
        s.pop();
    }
    return true;
} // 0.01+
