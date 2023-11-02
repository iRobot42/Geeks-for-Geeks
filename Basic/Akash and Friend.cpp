string Play( vector< int > nums, int k ) {
    bool f{};
    for ( int n : nums )
        while ( n ) f = !f, n /= k;
    return f ? "Akash" : "Friend";
} // 0.15+
