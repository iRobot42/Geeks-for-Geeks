string URLify( const string& s ) {
    return accumulate( s.cbegin(), s.cend(), string(),
        []( const auto acc, const auto c ){
            if ( c != ' ' ) return acc + c;
            else return acc + "%20"; });
}
