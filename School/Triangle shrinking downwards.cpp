string triDownwards( string S ){
    string s{ S };
    for ( size_t i{}; i < s.size() - 1; ++i, S += s )
        s[ i ] = '.';
    return S;
} // T: 0.01 - 0.02
