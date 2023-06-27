string shortestPath( string s ) {
    int dx{}, dy{};
    for ( const char c : s ) switch ( c ) {
        case 'E': ++dx; break;
        case 'W': --dx; break;
        case 'N': ++dy; break;
        case 'S': --dy; break; }
    s.clear();
    if ( dx > 0 ) s += string(  dx, 'E' );
    if ( dy > 0 ) s += string(  dy, 'N' );
    if ( dy < 0 ) s += string( -dy, 'S' );
    if ( dx < 0 ) s += string( -dx, 'W' );
    return s;
} // T: 0.07+
