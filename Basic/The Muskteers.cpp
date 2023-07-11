bool checkTogether( string s ) {
    const size_t i{ s.find( '0' )};
    return i != -1 && s.find( '0', s.find( '1', i )) == -1;
} // 0.02+
