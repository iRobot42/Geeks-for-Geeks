int romanToDecimal( string& s ) {
    auto rtoi{ []( const char roman ){
        switch ( roman ) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }}};
    int n{};
    for ( const auto& r : s ) {
        const int i{ rtoi( r ) };
        n += i < rtoi( *( next( &r ))) ? -i : i;
    }
    return n;
}
