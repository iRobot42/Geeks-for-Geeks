typedef vector< vector< int >> XY;
vector< int > findStartingPoint( int x, int y, XY path ) {
    for ( const auto& xy : path )
        x -= xy.front(),
        y -= xy.back();
    return { x, y };
} // T: 0.05+
