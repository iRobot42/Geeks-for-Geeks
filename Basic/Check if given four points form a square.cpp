int fourPointSquare( vector< vector< int >> points ) {
    unordered_set< int > x, y;
    for ( const auto& point : points )
        x.insert( point[ 0 ] ),
        y.insert( point[ 1 ] );
    return x.size() == 2 && y.size() == 2;
} // 0.69+
