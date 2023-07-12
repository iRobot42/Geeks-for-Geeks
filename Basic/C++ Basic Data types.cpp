int BasicDataType( string s ) {
    const size_t i{ s.find( '.' )};
    return s.size() == 1 && !isdigit( s.front() )
        ? 1 : i == -1 || s.size()-i < 7 ? 4 : 8;
} // 0.17+
